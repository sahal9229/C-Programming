
#include <stdio.h>

int main()
{
    int a[]={1,2,3,5,6,3,8};
    int size=sizeof(a)/ sizeof(a[0]);
    
    int freq[100]={0};
    
    for(int i=0; i<size; i++){
        freq[a[i]]++;
    }
    
   int isunique=0; 
    for(int i=0; i<size; i++){
        if(freq[i]>1){
            isunique=1;
            break;
        }
    }
    if(isunique==0){
        printf("The whole array is unique");
    }else{
        printf("The array have duplicates");
    }
    
    
    
    

    return 0;
}