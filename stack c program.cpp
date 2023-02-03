#include<stdio.h>
#include<stdio.h>
int top=-1,i,n,x,stack[10];
void push();
void pop();
void display();
int main()
{
   int choice;
   printf("\n enter the stack size :");
   printf("\n ------main menu------");
   printf("\n  1.push    2.pop    3.display     4.exit");
   while(choice!=4)
   {
   	printf("\n enter the choice :");
   	scanf("%d",&choice);
   	switch(choice)
   		{
   			case 1:push();
   			break;
   			case 2:pop();
   			break;
   			case 3:display();
   			break;
   			case 4:printf("\n exit point");
   			break;
   			default:printf("\n enter the valide choice .........");
	   }
   } 
 return 0;
}
void push()
{
	if(top==n)
	{
		printf("\n stack is full");
	}
	else
	{
		printf("\n enter the data :");
		scanf("%d",&x);
		top++;
		stack[top]=x;
		printf("\n %d is pushed in stack :",x);
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\n stack is empty :");
	}
	else
	{
		printf("\n %d is deleted from stack :",stack[top]);
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		printf("\n stack is empty :");
	}
	else
	{
		printf("\n elements in the stack :");
		while(top<=0)
		{
			printf("\n stack[top]= %d",top,stack[top]);
			top--;
		}
	}
}





