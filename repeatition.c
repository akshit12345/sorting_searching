// Given an array of n elements find the number which repeated for maximum number of times[time complexcity 0(n); space complexcity 0(n)]


#include<conio.h>
#include<stdio.h>
#define max 100

int main()
  {  int a[max],b[max],n,i,max=0,pos;
     scanf("%d",&n);
     for(i=0i<n;i++)
       {   scanf("%d",&a[i]);
           b[i]=0;
       }
     for(i=0;i<n;i++)
           b[a[i]++;
     max=b[0];
     for(i=0;i<n;i++)
        {   if(b[i]>max)
               {   max=b[i];
                   pos=i;
               }
         }
     printf("%d",pos);
     return 0;
  }    