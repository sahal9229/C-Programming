
#include <stdio.h>

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int size=sizeof(a) / sizeof(a[0]);
    int temp;
    int j=size-1;

	for(int i=0; i<j; i++){
    temp = a[i];
    a[i]=a[j];
    a[j]=temp;
    
    j--;}
    
    printf("The reversed Array: ");
    
    for(int i=0; i<size; i++){
        printf("%d \t",a[i]);
    }
    
    
		return 0;
}