#include<stdio.h>
int main(){
int i,arr[10],sum=0;
for(i=0;i<10;i++){
printf("enter a number:\n",i);
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("sum = %d\n",sum);
}