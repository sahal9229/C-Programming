/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100];
    printf("Enter the array elements: ");
    for(int n=0; n<5; n++){
        scanf("%d",&arr[n]);
    }
    printf("The reversed array is :");
    for(int i=5-1; i>=0; i--){
        printf("%d ",arr[i]);
    }

    return 0;
}
