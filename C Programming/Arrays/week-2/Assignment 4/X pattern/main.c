
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int total=2*num-1;
    
    for(int i=1; i<=total/2; i++){
        for(int j=1; j<=total; j++ ){
            if(j==i || j==total-i+1){
                printf(" %d",i);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    
        for(int i=total/2+1; i>=1; i--){
           for(int j=1; j<=total; j++ ){
            if(j==i || j==total-i+1){
                printf(" %d",i);
            }else{
                printf("  ");
            }
        }
        printf("\n"); 
            
        }
    

    return 0;
}