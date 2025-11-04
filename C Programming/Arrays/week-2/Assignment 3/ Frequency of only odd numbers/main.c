
#include <stdio.h>

int main()
{
    int a[]={1,4,3,6,2,7,9,5,3,2,3,5,6};
    int size=sizeof(a)/ sizeof(a[0]);
    int freq[100]={0};
    
    int temp;
    
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    printf("The sorted array: ");
    
    for(int i=0; i<size; i++){
        printf("%d ",a[i]);
    }
    
    for(int i=0; i<size; i++){
        freq[a[i]]++;
    }
    
    printf("\nThe frequancy of the odd number: ");
    for(int i=0; i<size; i++){
        if(freq[i]!=0 && freq[i]%2!=0 ){
            printf("\n%d \t %d\n",i,freq[i]);
        }
    }
    
    
    
    return 0;
}
