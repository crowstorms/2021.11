#include<stdio.h>
#include<math.h>

//include"abc.txt" 
int f(int x[],int L)
{  int i; 
   for(i=0;i<L;i++) printf("%d ",x[i]);
   printf("\n");
}

main()
{  int a[100]={1,2,3,4,5,6,7,8,9,10};
   int b[100]={1,2,3,4,5,6};
   f(a,10);
   f(b,6);
}
