#include<stdio.h>
#define max 5

int isfull (int stack[], int top){
    if (top == max-1){
        return 1;
    }
    else  
        return 0;
}

int isEmpty (int stack[], int top){
    if (top == -1){
        return 1;
    }
    else
        return 0;
}

void push (int stack[], int *top){
    if(isfull (stack, *top)){
        printf("The stack is full\n");
    }
    else{    
        (*top)++;
        printf("Enter element to be pushed : ");
        scanf("%d",&stack[*top]);
    }  
}

int pop (int stack[], int *top){
    if(isEmpty(stack,*top)){
        printf ("The stack is Empty\n");
    }
    else{
        (*top)--;
        return stack[(*top)+1];
    }

}

void display (int stack[], int top){
    for (int i = 0; i <= top; i++){
        printf("%d, ",stack[i]);
    }
    printf("\n");
}

int main()
{
    int stack [max];
    int stack_top = -1;
    int choice;
    do{
		printf ("Enter Choice\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		scanf ("%d",&choice);
		switch(choice){
			case 1:
				push(stack,&stack_top);
				break;
			case 2:
				pop(stack,&stack_top);
				break;
			case 3:
				display(stack,stack_top);
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
    
    return 0;
}