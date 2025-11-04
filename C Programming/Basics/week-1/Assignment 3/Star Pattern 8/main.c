
#include <stdio.h>

int main()
{
    int num,i,j,k;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(i=1; i<=num; i++){
        for(j=2; j<=i; j++){
            printf("  ");
        }
        for(k=i; k<=num; k++){
            printf(" *  ");
        }
        printf("\n");
    }

    return 0;
}
