
//Given an array of n-elements find whether the array having duplicates or not numbers are from 0 to (n-1) size of array n.[time complexcity 0(n);space complexcity 0(n)]


#include<conio.h>
#include<stdio.h>
#define max 100


int main()
 {  int a[max],b[max],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
          {    scanf("%d",&a[i]);
               b[i]=0;   
          }
    for(i=0;i<n;i++)
               b[a[i]]=b[a[i]]+1;

    for(i=0;i<n;i++)
           {     if(b[i]>=2)
                       c=1;
                 else 
                       c=0;
           }  
         	 if(c==1)
      		  	printf("Duplicate");
   		 else
       			 printf("Not");
    return 0;
 }
    	     