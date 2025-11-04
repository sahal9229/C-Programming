/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int a[]={1,4,2,4,1,5,4,6,3,7};
    int num=9;
    
    for(int i=0; i<num; i++){
        for(int j=i+1; j<num; j++){
            if(a[i]==a[j]){
                for(int k=j; k<num; k++){
                    a[k]=a[k+1];
                }
                num--;
            }
        }
    }
    
    for(int i=0; i<num; i++){
        printf("%d ",a[i]);
    }

    return 0;
}
