/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int array[5];
    
    printf("Enter number to array: ");
    for(int i=0; i<5; i++){
        scanf("%d",&array[i]);
    }
    
    printf("The third element is : %d",array[2]);

    return 0;
}
