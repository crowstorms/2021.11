#include<stdio.h>
struct stu
{  char s[4];
   char name[8];
   float a,b,c;
};

main()
{  stu x;
   int i;
   for(i=0;i<3;i++) 
   {scanf("%s%s%f%f%f",x.s,x.name,&x.a,&x.b,&x.c);
    printf("%s %s %.1f",x.s,x.name,x.a+x.b+x.c);
   }
} 
