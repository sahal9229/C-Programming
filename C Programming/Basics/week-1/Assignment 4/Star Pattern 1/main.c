/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("  ");
        }
        int num = 2 * (5 - i) + 1;
        for (int j = 1; j <= num; j++) {
            printf("%d ", j);
        }
    
        printf("\n\n");}
    

    return 0;
}
