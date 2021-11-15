#include<stdio.h>
#include<math.h>
int f(int x[],int L)
{  int s,i;
   s=0;
   for(i=0;i<L;i++) s+=x[i];
   return s;
}

main()
{  int a[100]={1,2,3,4,5,6,7,8,9,10};
   int n;
   n=10;
   printf("%d ",f(a,5));
   printf("%d ",f(a,10));
 } 
