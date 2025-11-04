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
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++ ){
       printf("*");
       
       if(i==2){
           printf("******");
       }else if(i==num){
            printf("******");
       }
        printf("\n");
        
    }
    

    return 0;
}