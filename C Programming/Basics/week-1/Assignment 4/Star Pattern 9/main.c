/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for( int i=1; i <= num; i++){
        for(int j=1; j<=i; j++){
            printf("  *  ");
        } 
           printf("\n");
    }
   
   for(int i=2; i<=num; i++){
       for(int j=1; j<=(num-i)+1; j++ ){
           printf("  *  ");
       }
       printf("\n");
   }

    return 0;
}