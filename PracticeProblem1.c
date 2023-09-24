#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char name[50];
    int age;
    float marks;
    struct node *next;

};
int main()
{
    
    struct node *head = 0, *trav, *newnode;
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Name: \n");
        scanf("%s",&newnode->name);
        
        printf("Marks: \n");
        scanf("%f",&newnode->marks);
        
        if (head == 0)
            head = trav = newnode;
        else
        {
            trav->next = newnode;
            trav = newnode;
        }
        printf("Do you want to continue (0/1)");
        scanf("%d",&choice);
    }
    trav=head;
    while(trav!=0){
    if(trav->marks<50)
    {
        printf("Student with marks <50 :%s\n",trav->name);
        
    }
    trav=trav->next;
    }
    return 0;
}
