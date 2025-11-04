
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        if((i==1) || (i==num)){
        for(int j=1; j<=num; j++){
            printf(" * ");
        }
        
    }else{
        printf(" * ");
        for(int k=1; k<=num-1; k++){
            
        printf("   ");}
        
    }
    for(int k=1; k<2; k++){
        printf(" * ");
    }
    printf("\n");
    }
    return 0;
}