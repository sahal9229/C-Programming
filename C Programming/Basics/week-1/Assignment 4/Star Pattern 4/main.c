
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i+=2){
        for(int j=1; j<=(num-i)+1; j+=2){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}