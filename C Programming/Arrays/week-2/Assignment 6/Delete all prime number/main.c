
#include <stdio.h>

int main()
{
	int arr[] = {6, 7, 13, 12, 17, 19};
	int size=sizeof(arr)/sizeof(arr[0]);

	for(int i=0; i<size; i++) {
		int num=arr[i];
		int flag=1;

		if(num<1) {
			flag=0;
		} else {
			for(int j=2; j<num/2 ; j++ ) {
				if(num%j==0) {
					flag=0;
					break;
				}

			}
		}
		if(flag==1){
		    for(int k=i; k<size; k++){
		        arr[k]=arr[k+1];
		    }
			i--;
			size--;
		}
	}
	

	for(int i=0; i<size; i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}