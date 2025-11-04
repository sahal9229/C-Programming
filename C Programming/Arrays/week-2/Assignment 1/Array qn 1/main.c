/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int array[4]={10,20,30,40,};
    
    printf("The array elements are: ");
    
    for(int i=0; i<4; i++){
    printf(" %d",array[i]);
    }

    return 0;
}