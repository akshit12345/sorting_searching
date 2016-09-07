// Given a list of (n-1) integers and these integers are in the range of 1 to n there are 2 duplicates in the list but one of the integers is missing in the list.


#include<conio.h>
#include<stdio.h>
#define max 100

int main()
  {  int a[max],n,i,s=0,s1=0;
     scanf("%d",&n);
     for(i=0i<n;i++)
           scanf("%d",&a[i]);

     s=n*(n+1)/2;
     for(i=0;i<n;i++)
         s1=s1+a[i];

     printf("%d",(s-s1));

     return 0;
  }    