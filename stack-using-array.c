/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include <stdlib.h>
int top = -1, n,a[100];
int main ( ){
   int ch;
   void push( );
   void pop( );
   void display( );
   printf ("Enter the size of the stack:");
   scanf ("%d", &n);
   printf("Stack implementation\n");
   printf ("1. Push \n");
   printf ("2. Pop \n");
   printf ("3. Display \n");
   do{
      printf ( "\nEnter ur choice:");
      scanf ("%d", &ch);
      switch (ch){
         case 1:
            {
               push();
               break;
            }
         case 2:
            {
               pop();
               break;
            }
         case 3:
            {
               display();
               break;
            }
         case 4:
            {
               printf("\n\t EXIT POINT ");
               break;
            }
            default:
            {
               printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
      }
   }
    while(ch!=4);
    return 0;
}
void push ( ){
   int item;
   if (top == n-1)
      printf ( "Stack over flow....");
   else{
      printf("Enter an element for insertion:");
      scanf ("%d", &item);
      top ++;
      a[top] = item;
   }
}
void pop ( ){
   int item;
   if (top == -1)
      printf ( "Stack under flow....");
   else{
      item = a[top];
      top --;
      printf("Deleted element = %d", item);
   }
}
void display ( ){
   int i;
   if(top>=0){
      printf("\n The elements in STACK \n");
      for(i=top; i>=0; i--)
      printf("\n%d",a[i]);
      printf("\n Press Next Choice");
      }
   else{
      printf("\n The STACK is empty");
      }
   
}

