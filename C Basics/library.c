#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define FILENAME "library.txt"

struct Book {
    char name_of_book[100];
    char writer[100];
    int available;
};

// Global variables
struct Book books[MAX_BOOKS];
int num_of_books = 0;

void MenuDisplay(){
    printf("\nLibrary Management System Menu\n");
    printf("1. Add Book\n");
    printf("2. Search Book\n");
    printf("3. Borrow Book\n");
    printf("4. Save Library to File\n");
    printf("5. Exit\n");
}
void BookAdd(){
    if (num_of_books < MAX_BOOKS) {
        printf("Enter book name_of_book: ");
        scanf(" %[^\n]", books[num_of_books].name_of_book);
        printf("Enter book writer: ");
        scanf(" %[^\n]", books[num_of_books].writer);
        books[num_of_books].available = 1; 
        num_of_books++;
        printf("Book added successfully.\n");
    } else {
        printf("Cannot add more books. Library is full.\n");
    }
}
void SearchBook(){
    char searchTitle[100];
    printf("Enter title to search: ");
    scanf(" %[^\n]", searchTitle);

    int found = 0;
    for (int i = 0; i < num_of_books; i++) {
        if (strcmp(books[i].name_of_book, searchTitle) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", books[i].name_of_book);
            printf("Author: %s\n", books[i].writer);
            printf("Availability: %s\n", books[i].available ? "Available" : "Not Available");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}
void BorrowBook(){
    char borrowTitle[100];
    printf("Enter name_of_book of book to borrow: ");
    scanf(" %[^\n]", borrowTitle);

    int found = 0;
    for (int i = 0; i < num_of_books; i++) {
        if (strcmp(books[i].name_of_book, borrowTitle) == 0) {
            if (books[i].available) {
                books[i].available = 0; 
                printf("Book '%s' borrowed successfully.\n", books[i].name_of_book);
            } else {
                printf("Book '%s' is not available for borrowing.\n", books[i].name_of_book);
            }
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}
void SaveToFile()
{
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < num_of_books; i++) {
        fprintf(file, "%s;%s;%d\n", books[i].name_of_book, books[i].writer, books[i].available);
    }

    fclose(file);
    printf("Library saved to file successfully.\n");
}
void LoadBooksFromFile(){
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("File not found or empty. Starting with an empty library.\n");
        return;
    }

    num_of_books = 0;
    while (fscanf(file, " %[^\n]%*c%[^\n]%*c%d", books[num_of_books].name_of_book, books[num_of_books].writer, &books[num_of_books].available) != EOF) {
        num_of_books++;
        if (num_of_books >= MAX_BOOKS) {
            printf("Maximum number of books reached. Some books may not be loaded.\n");
            break;
        }
    }

    fclose(file);
    printf("Library loaded from file successfully.\n");
}



int main() {
    LoadBooksFromFile();

    int choice;
    do {
        MenuDisplay();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                BookAdd();
                break;
            case 2:
                SearchBook();
                break;
            case 3:
                BorrowBook();
                break;
            case 4:
                SaveToFile();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}










