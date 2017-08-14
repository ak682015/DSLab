#include <stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE],front=-1,rear=-1;

int isfull()
{ //returns 1 if stack is full else -1
	return (rear==(MAXSIZE-1));
}

int isempty()
{//returns 1 if stack is full else -1
	return (front==-1 && rear==-1);
}

void display()
{//returns the element at the top of the stack
	int i;
	printf("THE ELEMENETS OF THE QUEUE ARE : \n"); 
	for(i=front;i<=rear;i++)
	printf("%d\t",queue[i]);

}
void insertQueue(int d)
{
	if(isfull())
	{
		printf("QUEUE IS FULL!!!!!! \n");
		return;
	}
	else
	{
		queue[++rear]=d;
		if(front==-1)
		front++;
		printf("The Element is Succesfully inserted \n");
	}
}

void deleteQueue()
{	if(isempty())
	{
		printf("QUEUE IS EMPTY \n");
		return;
	}
		
	int d=queue[front++];
	
	if(front==rear)
		{
			front=rear=-1;
		}
	else
	{
		front++;
	}
	printf("ELEMENT DELETED SUCCESFULLY \n");	
}
int main()
{
    int ch,e;
    do
    {
        printf("\n\tMENU\n1.DISPLAY\n2.DELETE\n3.INSERT\n4.EXIT\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:display();
                   break;
            case 2:deleteQueue();
                   break;
            case 3:printf("\nenter the element to be inserted:");
                   scanf("%d",&e);
                   insertQueue(e);
                   break;
            case 4:return 0;
        }
    }while(1);
    return 0;
}





