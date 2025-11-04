/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[]={1,2,3,5,2,4,3,5,6,7,8,};
    int num=9;
    
    printf("The duplicsate elements: ");
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(a[i]==a[j]){
                printf("%d ",a[i]);
            }
        }
    }

    return 0;
}
