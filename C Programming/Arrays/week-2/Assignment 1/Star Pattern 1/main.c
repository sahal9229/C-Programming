/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i;
   
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    
    for(i=1; i<=num; i++){
        printf(" 0  ");
        printf(" %d  ",i);
    
    
    for(int j=2; j<=i; j++){
        
        if(j==2){
        printf(" %d  ",i+i);
            }
            else{
                printf(" %d  ",i*j);
            }
        
        
        
    }
    
        printf("\n");
    }

    return 0;
}