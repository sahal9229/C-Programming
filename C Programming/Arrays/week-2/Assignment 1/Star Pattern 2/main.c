
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        for(int k=i+1; k<=num*2-i; k++){
             printf("  ");  
            }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
