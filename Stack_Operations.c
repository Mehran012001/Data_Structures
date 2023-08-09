               //Progam to implement push,pop,peek,display operations on stack using arrays taking input from user> 

#include<stdio.h>
#include<stdlib.h>

int stack[5];
int top=-1;
void push()
{
    int a;
   printf("Enter Data you want to push in stack :  ");
    scanf("%d",&a);
    if(top==4)
    printf("Stack Is already full");
    else{
        top++;
        stack[top]=a;
    }
}
void display(){
    int i;
    for(i=top;i>=0;i--)
    printf("\nStack Elements are : %d",stack[i]);
}
void pop(){
    int item;
    if(top==-1)
    printf("Stack is empty. ");
    else{
        item = stack [top];
        top--;
    }
    printf("\nPopped item is %d",item);
}
void peek(){
    if(top==-1)
    printf("Stack is empty. ");
    else{
        printf("\nTop item is %d",stack[top]);
    }
}
int main(){
    int a;
    while(1){
    printf("***STACK MENU***\n 1 for Push\n 2 for pop \n 3 for peek \n 4 for display \n Enter your choice: (1-4):");
    scanf("%d",&a);
    switch(a){
    case 1 : push();
    break;
    case 2 : pop();
    break;
    case 3 : peek();
    break;
    case 4 : display();
    break;
    default : printf("WRONG CHOICE");
    }}
    return 0;
}
