// Given an array of n elements find the number which repeated for maximum number of times[time complexcity 0(n); space complexcity 0(1)]


#include<conio.h>
#include<stdio.h>
#define max 100

int abs(int n)
{
	if(n<0)
		return(n*(-1));
	else	
		return 0;
}


int main()
  {  int a[max],n,i,g=0,ch=0;
     scanf("%d",&n);
     for(i=0i<n;i++)
           scanf("%d",&a[i]);

     for(i=0;i<n;i++)
          {    if(a[abs(a[i])]==0)
                  {    g++;
                          if(g>1)
                             {   ch=1;
                                 printf("Yes");
                                 break;
                             }
                  }
               else 
                  {    if(a[abs(a[i])]>0)
                           a[abs(a[i])]=-1*a[abs(a[i])];
                       if(a[abs(a[i])]<0)
                           {      ch=1;
                                  printf("Yes");
                                  break;
                           }
                  }
          }
      if(ch==0)
          printf("No");

     return 0;
  }    