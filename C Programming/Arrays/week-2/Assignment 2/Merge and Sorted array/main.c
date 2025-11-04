
#include <stdio.h>

int main()
{
   int arr1[]={1,3,5}, arr2[]={2,4,6}, arr3[6];
   
   for(int i=0; i<3; i++){
       arr3[i]=arr1[i];
   }
   
   for(int i=0; i<3; i++){
       arr3[i+3]=arr2[i];
       
   }
   
   
   printf("The merged array is: ");
   for(int i=0; i<6;i++){
       printf("%d\t",arr3[i]);
   }
   
   int temp;
   
   printf("\nThe sorted array: ");
   for(int i=0; i<6; i++){
       for(int j=i+1; j<6; j++){
           
       
       if(arr3[i]>arr3[j]){
           temp=arr3[i];
           arr3[i]=arr3[j];
           arr3[j]=temp;
       }}
   }
   
   for(int i=0; i<6; i++){
       printf("%d  ",arr3[i]);
   }
   
   

    return 0;
}