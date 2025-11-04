
#include <stdio.h>

int main()
{
    int a[]={1,4,3,6,2,7,9,5,3,2,3,5,6};
    int size=sizeof(a)/ sizeof(a[0]);
    
    int freq[100]={0};
    
    for(int i=0; i<size; i++){
        freq[a[i]]++;
    }
    
    printf("This is the unique elements: \n");
    for(int i=0; i<size; i++){
        if(freq[i]==1){
            printf("%d\n",i);
        }
    }
    
    printf("This is the duplicate elements: \n");
    for(int i=0; i<size; i++){
        if(freq[i]>1){
            printf("%d\n",i);
        }
    }
    

    return 0;
}