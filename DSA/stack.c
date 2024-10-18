#include <stdio.h>
#define max 5

int stack[max];
int top = -1;

int isfull(){
	if (top == max-1){
		return 1;
	}
	else
		return 0;
}

int isempty(){
	if (top == -1){
		return 1;
	}
	else 
		return 0;
}

void push (){
	if(isfull()){
		printf ("Stack Overflow\n");
	}
	else{
	int ele;
	printf ("Enter element to be added : ");
	scanf ("%d",&ele);
	top++;
	stack[top] = ele;
	}
}


void pop () {
	if (isempty()){
		printf("Stack Underflow\n");
	}
	printf ("Popped element is : %d\n",stack[top]);
	top--;
}

void display (){
    printf ("The stack elements are : ");
	for (int i = 0; i <= top; i++){
		printf ("%d, ",stack[i]);
	}
	printf("\b\b  \n");
}

int main(){
	int choice;
	do{
		printf ("Enter Choice\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		scanf ("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
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
	}
	while(choice != 4 );
	
}