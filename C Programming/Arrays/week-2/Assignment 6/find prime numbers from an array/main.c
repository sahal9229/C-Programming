
#include <stdio.h>
int prime(int a[],int size);
int main()
{
    int arr[] = {5, 8, 13, 9, 4, 17};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    prime(arr,size);
    

    return 0;
}

int prime(int a[],int size){
    
    
    for(int i=0 ; i<size; i++){
        int isprime=1;
        int num=a[i];
       
   if(num<=1){
        isprime=0;}
   else{ 
      
        for(int j=2; j<=num-1; j++){
            if(num % j==0){
                isprime=0;
            }
        }
    }
    
    if(isprime==1)
    
    printf("%d ",num);
    
    }
     printf("\n");
     
     
} 