#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *fr=NULL;
struct node *re=NULL;

void enqueue(){
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("enter ur data : ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    
    if (fr == NULL)
    {
        fr = re = new_node;
        printf("EnQ %d",re->data);
    }else
    {
        re->next=new_node;
        re=new_node;
        printf("enQ %d",re->data);
    }
    
    
    
    
}

void dequeue(){
    if (re == NULL)
    {
        printf("underflow");
    }else if (fr = re)
    {
        printf("DQ %d",fr->data);
        fr= re = NULL;
    }else
    {
        printf("DQ %d",fr->data);
        fr=fr->next;
    }
    
    
    
}

void display(){
    struct node *temp;
    temp=fr;
    if (fr == NULL)
    {
        printf("underflow");
    }else
    {
        printf("Q :");
        while (temp != NULL)
        {
            printf("->%d ",temp->data);
            temp = temp->next;
        }
        
    }
    
    
}
