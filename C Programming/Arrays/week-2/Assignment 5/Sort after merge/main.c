
#include <stdio.h>

int main()
{
    int arr1[]={1,4,2,3};
    int arr2[]={6,4,5,3};
    int arr3[1000];
    
    int s1=sizeof(arr1)/sizeof(arr1[0]);
    int s2=sizeof(arr2)/sizeof(arr2[0]);
    
    int s3=s1+s2;
    
    
    for(int i=0; i<s1; i++){
        arr3[i]=arr1[i];
    }
    
    for(int j=0; j<s2; j++){
        arr3[j+s1]=arr2[j];
    }
    
    printf("The merged array: \n");
    for(int i=0; i<s3; i++){
        printf("%d ",arr3[i]);
    }
    
    for(int i=0; i<s3; i++){
        for(int j=i+1; j<s3; j++){
            if(arr3[i]>arr3[j]){
                int temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    
    printf("\nThe sorted array: \n");
    for(int i=0; i<s3; i++){
        
        printf("%d  ",arr3[i]);
    }
    
    return 0;
}