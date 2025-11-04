
#include <stdio.h>

int main()
{
    int limit,arr[100];
    
    printf("Enter a limit: ");
    scanf("%d",&limit);

    printf("Enter the array elements: ");
    for(int i=0; i<limit; i++){
        scanf("%d",&arr[i]);
    
    }
    int intex,value;
    
    printf("Enter the intex want to insert value: ");
    scanf("%d",&intex);
    printf("Enter the value to insert: ");
    scanf("%d",&value);
    
    for(int i=limit; i>=intex; i--){
        arr[i]=arr[i-1];
    }
    
    arr[intex-1]=value;
    
    for(int i=0; i<limit+1; i++){
    printf("%d\t",arr[i]);}
    
    
    
    return 0;
}
