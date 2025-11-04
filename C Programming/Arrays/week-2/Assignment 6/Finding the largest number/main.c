
#include <stdio.h>
void largest(int a[],int size);
int main()
{
    int arr[] = {12, 9, 15, 100, 25, 19, 1};
    int size=sizeof(arr)/sizeof(arr[0]);

    largest(arr,size);
    return 0;
}

void largest(int a[],int size){
    
    int largest=0;
    
    
        for(int j=0; j<size; j++){
            if(a[j]> largest){
                largest=a[j];
            }
            }
        
    
    
    printf("%d ",largest);
    
    
}
