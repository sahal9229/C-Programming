
#include <stdio.h>

int main()
{
    int choice,a,b,c;
    
    
    printf("Enter a number to choice: \n1 for Addition. \n2 for Substraction. \n3 for Multipication. \n4 for Division.\n");
    scanf("%d",&choice);
    
    printf("\nEnter two numbers: \n");
    scanf("%d%d",&a,&b);
    
    switch(choice){
        case 1:
        c=a+b;
        printf("The Sum Is %d",c); 
        break;
        
        case 2:
        c=a-b;
        printf("The Result Is %d",c);
        break;
        
        case 3:
        c=a*b;
        printf("The Result Is %d",c);
        break;
        
        case 4:
        c=a/b;
        printf("The Result Is %d",c);
        break;
    }
    return 0;
}