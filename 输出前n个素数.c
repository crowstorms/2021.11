#include<stdio.h>
#include<math.h>
int f(int n)
{  int i,s;
   s=0;
   for(i=1;i<=n;i++) s+=i;
   return s;
}//结束函数，产生值
 
int isPrime(int n)//n是素数 函数值为1，否则为0 
{  int i,k;
   k=sqrt(n)+1e-6;
   for(i=2;i<=k;i++)
     if(n%i==0) return 0;
   return 1;
} 

main()
{  int i,n,k;
   n=10;
   k=0;
   for(i=2;k<n;i++)
     if(isPrime(i))
     {  printf("%d ",i);
        k++;
	 }//输出前n个素数 
 } 
