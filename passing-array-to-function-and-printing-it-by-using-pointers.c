#include <stdio.h>
void display(int a, int b, int c, int d, int e){
}
int main(){
    int a1[] = {0, 2, 8, 4, 12};
    display(a1[0], a1[1], a1[2], a1[3], a1[4]); /// Passing array elements to display/
    
    int *p=&a1[0];
    int i;
    for(i=0; i<5; i++)
    printf("\nArray[%d] is %d ",i,*(p+i));  //Printing elements using pointer
    
    return 0;
}
