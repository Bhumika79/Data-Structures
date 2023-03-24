#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *temp;
main(){
    void traverse()
    {
		struct node *temp = head;
		if(head == NULL)
			printf("nothing to traverse\n");
		while(temp != NULL){
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}
}
