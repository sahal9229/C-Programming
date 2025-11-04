/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int mark;
    
    printf("Enter Your Mark: ");
    scanf("%d",&mark);
    
    if(mark<=100){
        
    
    if(mark>=90){
        printf("Your grade is A");
    }
    else if(mark>=80){
        printf("Your grade is B");
    }
    else if(mark>=70){
        printf("Your grade is C");
    }
    else if(mark>=60){
        printf("Your grade is D ");
    }
    else{
        printf("Your failed");
    }

    }else{
        printf("The maximum mark is 100");
    }
    return 0;
}
