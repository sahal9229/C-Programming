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
    
    char let='A';
    
    for(int i=2; i<=num+1; i++){
        for(int j=1; j<i; j++){
            if(i%2==0){
                printf("%c ",let);
                
                }
                else{
                    printf("%d ",i-2);
                }
                
        }
        
        
        printf("\n");
        
       if(i % 2 == 0) {
            let++;
        }
    }
    return 0;
}