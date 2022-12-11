#include<stdio.h>
int main(){
    int i,max,min,arr[10]={1,3,54,67,29,4,2,27,89,53};
    max=min=arr[0];
    for(i=0;i<10;i++){
if(arr[i]<min)
min=arr[i];
if(arr[i]>max)
max=arr[i];
    }
printf("minimum = %d , maximum = %d\n",min,max);
}