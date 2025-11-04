
#include <stdio.h>
int min(int arr[], int size);
int main()
{
    int arr[] = {12, 9, 15, 5, 2, 19, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=min(arr,size);
    
    
    printf("The minimum value is %d",result);
    return 0;
}

int min(int arr[], int size){
    
    int mini=1;
    for(int i=0; i<size; i++){
        if(arr[i]<mini){
           mini=arr[i]; 
        }
    }
    
    return mini;
    
}
