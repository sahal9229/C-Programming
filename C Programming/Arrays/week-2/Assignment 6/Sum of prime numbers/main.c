
#include <stdio.h>

int main()
{
    int arr[] = {6, 7, 13, 15, 17, 19};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int sum=0;
    
    printf("Prime numbers in this array: ");
    
    for(int i=0; i<size; i++){
        int flag=1;
       int num=arr[i]; 
        if(num<1){
            flag=0;

        }else{
            for(int j=2; j<num-1; j++){
                if(num%j==0){
                    flag=0;
                    break;
                }
                
            }
        }
        
        if(flag==1){
            sum=sum+num;
            printf("%d ",num);}
        
    }
    printf("\nThe sum of prime numbers are: %d",sum);

    return 0;
}
