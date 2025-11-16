// 1 A.	Write a program to accept ‘n’ numbers into an array and then calculate the sum of numbers present in odd positions and even positions respectively.	
#include<stdio.h>
int main(){
  int n,i, sum_even = 0,sum_odd = 0 ;
int a[100];
printf("enter the number of elements in array: ");
scanf("%d", &n);
printf("enter %d elements :\n", n);
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
for(i=0;i<n;i++){
if(i%2==0){
sum_even += a[i];
}else{
sum_odd += a[i];
}
}
printf("sum of even position elements:%d\n ", sum_even);
printf("sum of odd position elements:%d ", sum_odd);
}


