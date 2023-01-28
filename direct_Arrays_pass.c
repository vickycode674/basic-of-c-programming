#include <stdio.h>


int minarr(int arr[],int size){ //the funtion creation for an array as an argument

int min=arr[0];
int i=0;
for(i=1;i<size;i++){
if(min>arr[i])
{
min=arr[i];
}
    }
return min; 
}


int main()
{
int arr[5]={3,4,2,6,5}; //declaration of array

int min= minarr(arr,5); //passing array with size
printf("the min number in the array is=%d",min);

return 0;
}
