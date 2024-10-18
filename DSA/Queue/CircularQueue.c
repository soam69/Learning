#include <stdio.h>
#define size 5

int fr = 0;
int rr = 0;
int arr[size];

int isfull(){
	if ((rr+1)%size == fr){
		return 1;
	}
	else
		return 0;
}

int isEmpty(){
	if (rr==fr){
		return 1;
	}
	else
		return 0;
}

void enqueue(){
	if(isfull()){
		printf("The queue is full.\n");
	}
	else{
		rr = (rr+1)%size;
		printf("Enter element to be insterted : ");
		scanf("%d",&arr[rr]);
	}
}

void dequeue (){
	if (isEmpty()){
		printf ("The queue is already empty.\n");
	}
	else{
		fr = (fr+1)%size;
	}
}

void display(){
	for (int i = fr+1; i <= rr;){
		printf("%d, ",arr[i]);
		i = (i+1)%size;
	}
	printf("\n");
}

int main(){
	int choice;
    do
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thank You!");
            break;
        default:
            printf("Invalid Choice ! Choose Again : ");
            break;
        }
    } while (choice != 4);
		
}

























