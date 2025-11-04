/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100],temp;
    
    printf("Enter array elements: ");
    
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    printf("The sorted array is : ");
    
    for(int i=0; i<5; i++){
    printf("%d\n",arr[i]);
        
    }

    return 0;
}
