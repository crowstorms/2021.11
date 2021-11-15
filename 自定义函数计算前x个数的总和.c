#include<stdio.h>
#include<math.h>

int f(int n)
{int i,s;
 s=0;
 for(i=0;i<=n;i++) s+=i;
 return s;
}

main()
{printf("%d %d",f(100),f(200));
}
