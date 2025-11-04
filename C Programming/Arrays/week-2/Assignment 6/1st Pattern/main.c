
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num-i+1; j++){
            printf(" %d ",j);
        }
        for(int k=num-i; k>=1; k--){
            printf(" %d ",k);
        }
        
        printf("\n");
    }

    return 0;
}
