/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

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
    void insertionbeginning(struct node *new1){
        if(head == NULL)
            head = new1;
        else{
            new1->next = head;
            head = new1;
            }
    }
    void deletionbeginning(){
		if(head == NULL)
			printf("nothing to delete\n");
		else
			head = head->next;
	}
}


