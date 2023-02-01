/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
    void insertionend(struct node *new1){
		temp = head;
		if(head == NULL)
			head = new1;
		else{
			while(temp->next!= NULL)
				temp = temp->next;
			temp->next = new1;
			}
	}
	void deletionend(){
		struct node *temp = head;
		struct node *temp1 = head;
		if(head == NULL)
			printf("nothing to delete\n");
		else{
			while(temp1->next != NULL){
				temp = temp1;
				temp1 = temp1->next;
				}
	    	if(temp1 == head)
	    		head = NULL;
			else
			 	temp->next = NULL;
			}
	}
}

