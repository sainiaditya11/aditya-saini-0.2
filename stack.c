#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack[MAX];
int top =-1;
void push(int value )
{
    if (top == MAX -1 )
  {
    printf(" stack is overflow \n");
    }
else{
    top++;
    stack [top] = value;
    printf("inserted %d \n", value);
    }
}
void display(){
    if(top == -1)
{
    printf("stack is empty \n ");
    } else {   
printf(" stack elements: \n");
for(int i= top; i>=0; i--)
  {
printf('%d \n', stack [i]);
       }
   }
}
int main ()
{
push (10);
push (20);
push  (30);
push (40);
push (50);

display();

return 0;
}
