/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int num1,num2,num3,temp;
    
    printf("Enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    if(num1>num2){
        temp=num1;
    }else{
        temp=num2;
        
    }
    
    
    if(num3>temp){
        printf("%d is the biggest number",num3);
    }else{
        printf("%d is the biggest number",temp);
    }
    return 0;
}
