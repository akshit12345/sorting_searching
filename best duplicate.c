
//Given an array of n-elements find whether the array having duplicates or not numbers are from 0 to (n-1) size of array n.[time complexcity 0(n);space complexcity 0(1)]


#include<conio.h>
#include<stdio.h>
#define max 100


int main()
 {  int a[max],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
          {    scanf("%d",&a[i]);   
          }
    for(i=0;i<n;i++)
          {    if(a[a[i]]>0 && a[a[i]]!=999)
       		   a[a[i]]=-1*a[a[i]];
	       else if(a[a[i]]==0)
                   a[a[i]]=999;
               else if(a[a[i]]<0 || a[ai]]==999)
                   c=1;
                   break;
          }

                   
      if(c==1)
      	  printf("Duplicate");
      else
       	  printf("No Duplicate");
    return 0;
 }
    	     