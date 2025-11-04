
#include <stdio.h>

int main()
{
    for(int i=1; i<=8; i++){
       if(i%2!=0){
           printf("******");
       }else{
           printf("*");
       }
       printf("\n");
    }

    return 0;
}