#include <stdio.h>

int main()
{
     int arr[] = {2, 6, 9, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < size ; i++){
        int last=arr[size-1];
        
        for(int j=size-1; j>i; j--){
            arr[j]=arr[j-1];
        }
        arr[i]=last;
    }
    
     printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}