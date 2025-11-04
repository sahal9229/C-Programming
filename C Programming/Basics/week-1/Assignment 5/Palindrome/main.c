
#include <stdio.h>

int main()
{
    int num,reversed=0,remainder,original;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    original=num;
    
    while(num!=0){
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
    
     if (original == reversed)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
        
    printf("\n%d",reversed);

    return 0;
}
