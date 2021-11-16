#include<stdio.h>
main()
{  char s[1000]="aabbbcccccc";
   int n[128]={0},i;
   for(i=0;s[i];i++) n[s[i]]++;
   for(i=0;i<128;i++)
     if(n[i]) printf("%c:%d\n",i,n[i]);  
}
