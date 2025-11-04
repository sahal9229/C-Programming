/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3,10, 4, 5};
	int size=sizeof(a) / sizeof(a[0]);
	
	int i=0, j=size-1,temp;
	
	while(i<j){
	    temp=a[i];
	    a[i]=a[j];
	    a[j]=temp;
	    
	    i++;
	    j--;
	}


    printf("The reversed array is: ");
    
    for(int i=0; i<size; i++){
        printf("%d \t",a[i]);
    }
    return 0;
}
