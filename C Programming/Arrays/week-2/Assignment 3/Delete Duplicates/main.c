
#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3,4,2,5,2,8,4,3,2};
    int size = sizeof(a) / sizeof(a[0]);
    
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(a[i]==a[j] && j!=i){
                for(int k=j; k<size; k++){
                    a[k]=a[k+1];
                    size--;
                }
            }
        }
    }


    printf("The unique elements are: ");
    for(int i=0; i<size; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
