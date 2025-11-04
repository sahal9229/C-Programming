/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int limit;
    
    printf("Enter a limit: ");
    scanf("%d",&limit);
    
    int arr[limit];
    
    printf("Enter the aray Elements: ");
    for(int i=0; i<limit; i++){
        scanf("%d",&arr[i]);
    }
    
    int sum=0;
    
    for(int j=0; j<limit; j++){
        sum=sum+arr[j];
    }
    
    printf("The sum: %d ",sum);
    

    return 0;
}
