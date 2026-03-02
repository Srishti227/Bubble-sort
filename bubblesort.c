#include<stdio.h>
void bubblesort(int arr[], int n)
{
  for(i=0;i<n-1;i++){
    for(j=0;i<n-i-1; j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}
int main()
int arr[]={5,1,4,2,8};
int n=5;
bubblesort(arr,n);
printf("Sorted Elements are:\n");
for(int i=0;i<n;i++){
  printf("%d  ",arr[i]);

return 0;
}
//v1.0: basic bubble sort implementation
