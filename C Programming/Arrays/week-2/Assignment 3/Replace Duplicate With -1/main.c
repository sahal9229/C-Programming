
#include <stdio.h>

int main()
{
    int a[]={1,4,3,6,2,7,9,5,3,2,3,5,6};
    int size=sizeof(a)/ sizeof(a[0]);
    
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(a[i]==a[j]){
                a[j]=-1;
            }
        }
    }
    
    printf("Duplicate replaced by -1 : \n");
    for(int i=0; i<size; i++){
        printf("%d ",a[i]);
    }

    return 0;
}
