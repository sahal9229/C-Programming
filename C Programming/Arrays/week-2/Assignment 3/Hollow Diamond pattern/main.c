/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        for(int j=i; j<=num; j++){
            printf("  ");
        }
        printf(" *");
        
        if(i>1){
            for(int j=1; j<=2*i-3; j++){
                printf("  ");
            }
            printf(" *");
        }
        
        printf("\n");
    }



    for(int i=num-1; i>=1; i--){
        
        for(int j=num; j>=i; j--){
            printf("  ");
        }
        printf(" *");
        if(i>1){
            for(int j=1; j<=2*i-3; j++){
                printf("  ");
            }
            printf(" *");
        }
        printf("\n");
    }
    
    return 0;
}
