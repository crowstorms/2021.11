#include<stdio.h>
main()
{  char x[100]="abc 3433 efg dddd ffff";
   char a[100],b[100];
   int n;
   sscanf(x,"%s%d%s",a,&n,b);
   puts(a);
   puts(b);
   printf("%d",n);
}
