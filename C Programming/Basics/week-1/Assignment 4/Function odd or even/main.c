/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int oddOReven(int);
int main()
{
    int num,res;
    
    printf("Enter two numbers: ");
    scanf("%d",&num);
    
    res=oddOReven(num);
    
    if(res==1){
        printf("IS a even number");
    }else{
        printf("IS odd number");
    }

    return 0;
}

int oddOReven(int a){
    int result=0;
    
    if(a%2==0){
        result=1;
    }
    
    return result;
    
}