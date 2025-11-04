
#include <stdio.h>

int main()
{
    int num; 
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("  ");
        }
        
        for(int k=1; k<=2*(num-i)+1; k++ ){
            printf("%d ",k);
        }
        
        printf(" \n");
    }

    return 0;
}
