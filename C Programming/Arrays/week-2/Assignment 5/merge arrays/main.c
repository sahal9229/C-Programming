
#include <stdio.h>

int main()
{
	int s1,s2,s3;
	int a1[100],a2[100],a3[100];

	printf("Enter the 1st array limit: ");
	scanf("%d",&s1);

	printf("\nEnter the array elements: ");
	for(int i=0; i<s1; i++) {
		scanf("%d",&a1[i]);
	}

	printf("\nEnter the 2nd array limit: ");
	scanf("%d",&s2);

	printf("\nEnter the array elements: ");
	for(int i=0; i<s2; i++) {
		scanf("%d",&a2[i]);
	}

	s3=s1+s2;

	int i;
	for(i=0; i<s1; i++ ) {
		a3[i]=a1[i];
	}

	for(int j=0; j<s2; j++) {
		a3[j+s1]=a2[j];
		i++;
	}

	printf("The merged array is :");

	for(int i=0 ; i<s3; i++) {
		printf("%d  ",a3[i]);
	}

	return 0;
}
