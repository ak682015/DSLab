#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int stack[MAX_SIZE],top=-1;

int isFull(){
	//returns 1 if stack is full else returns -1
	return (top==MAX_SIZE-1)?1:-1;
}

int isEmpty(){
//returns 1 if stack is empty else returns -1
	return (top==-1)?1:-1;

}

int peek(){
//return element at the top of stack

return stack[top];
}

void push(int e){
//inserts an element into stack

	if(top!=isFull())
	{
		//increment the top 
		top++;
		//set top of stack equal e
		top=e;
		//msg element e successfully inserted
		printf("%d is succesfully inserted\n",e);
	}
	else{
		//msg stack overflow
		printf("STACK OVERFLOW\n");
	}
}

void pop(){
//deletes an element from top of stack
	int d;
	if(!isEmpty())
	{
		//d=top of stack
		d=top;
		//decrement the top
		top--;
		//msg element d successfully deleted
		printf("%d is succesfully deleted\n",d);
	}
	else{
		//msg stack underflow
			printf("STACK UNDERFLOW\n");
	}
}

int main(){
	int choice,e,i;
	do
	{
		//display menu 1.peek 2.push 3.pop 4.exit
		printf("enter your choice 1.peek 2.push 3.pop 4.exit\n");
		//take input in choice variable
		scanf("%d",&choice);
		switch(choice){
			case 1:
				//call peek function
				i=peek();
				printf("%d\n",i);
				break;
			case 2:
				//call push function
				scanf("%d",&e);
				push(e);
				break;
			case 3:
				//call pop function
				pop();
				break;
			case 4:
				//call exit(0) function or return 0
				exit(0);
				break;
			default:
				//invalid choice
				printf("Invalid Choice");				
		}
	}while(1);
	printf("%d",top);
	return 0;
}
