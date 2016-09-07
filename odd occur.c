//Given an array of positive integers all numbers occurs even number of time except one number which occurs odd number of time.Find the number in 0(n) and constant space



#include<conio.h>
#include<stdio.h>
#define max 100

int main()
  {  int a[max],n,i,d=a[0];
     scanf("%d",&n);
     for(i=0i<n;i++)
           scanf("%d",&a[i]);

     for(i=0;i<n;i++)
         d=d^a[i];

     printf("%d",d);

     return 0;
  }    