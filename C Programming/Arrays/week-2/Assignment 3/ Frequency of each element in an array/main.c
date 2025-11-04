
#include <stdio.h>

int main()
{
    int a[9]={2,2,3,5,2,5,4,7,10};
    
    int freq[9]={0};
    
    
    for(int i=0; i<9; i++){
        freq[a[i]]++;
    }
    printf("Frequancy of each elements: \n");
    
    for(int i=0; i<9; i++){
        if(freq[i] != 0){
    printf("%d \t %d\n ",i,freq[i]);
    }

    }
    return 0;
}
