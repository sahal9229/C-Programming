/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int big(int,int,int);
int main()
{
    
    int num1,num2,num3;
    
    printf("Enter Three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    big(num1,num2,num3);

    return 0;
}

int big(int a,int b,int c){
    
    if(a>=b && a>=c){
        printf("%d is greatest",a);
    }else if(b>=a && b>=c){
        printf("%d is greatest",b);
    }else{
        printf("%d is graetest",c);
    }
    
}