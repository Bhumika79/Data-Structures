/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
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
    void traverse(){
		struct node *temp = head;
		if(head == NULL)
			printf("nothing to traverse\n");
		while(temp != NULL){
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}
}

