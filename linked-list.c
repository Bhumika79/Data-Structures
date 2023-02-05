#include <stdio.h>
# include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int main()
{
    struct node *new1,*new2,*new3,*new4,*new5;
    struct node *head=NULL;
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=10;
    new1->next=NULL;
    head=new1;
    new2=(struct node*)malloc(sizeof(struct node));
    new2->data=20;
    new2->next=NULL;
    new2->next=head;
    head=new2;
    new3=(struct node*)malloc(sizeof(struct node));
    new3->data=30;
    new3->next=NULL;
    new3->next=head;
    head=new3;
    new4=(struct node*)malloc(sizeof(struct node));
    new4->data=40;
    new4->next=NULL;
    new4->next=head;
    head=new4;
    new5=(struct node*)malloc(sizeof(struct node));
    new5->data=50;
    new5->next=NULL;
    new5->next=head;
    head=new5;
    printf("%d\n", new1->data);
    printf("%d\n", new2->data);
    printf("%d\n", new3->data);
    printf("%d\n", new4->data);
    printf("%d\n", new5->data);
    
}
