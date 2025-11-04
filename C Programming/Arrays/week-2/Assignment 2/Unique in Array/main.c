/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void unique(int arr[],int len);
int main()
{
    int arr[] = {4, 5, 4, 6, 6, 7, 8};
    unique(arr,7);

    return 0;
}

void unique(int arr[],int len){
    int count=len;
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<len; k++){
                    arr[k]=arr[k+1];
                }
                count--;
                len--;
            }
        }
    }
    
    printf("The array after deleting duplicates: ");
    
    for(int i=0; i<len; i++){
        printf("%d",arr[i]);
    }
    printf("\nThe count is %d",count);
    
    
}