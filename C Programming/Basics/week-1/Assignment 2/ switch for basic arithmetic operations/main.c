/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice,num1,num2; 
    
    printf("Enter Two Numbers: ");
    scanf("%d%d",&num1,&num2);
    
    printf("Enter your choice:\n");
    printf("For Addition 1: \nFor Substraction 2: \nFor Multiplication3: \nFor Divition 4: \n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("Sum is %d",num1+num2);
        break;
        
        case 2:
        printf("Sum is %d",num1-num2);
        break;
        
        case 3:
        printf("Sum is %d",num1*num2);
        break;
        
        case 4:
        printf("Sum is %d",num1/num2);
        break;
    }
    
    return 0;
}