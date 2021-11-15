#include<stdio.h>
main()
{  int i,x;
   char s[1000]="asdfghjkinbcwIqe";
   for(i=0,x=0;s[i]!='\0';i++) 
   switch(s[i])
   {  case 'a':
   	  case 'e':
	  case 'i':
	  case 'o':
	  case 'u':
	  case 'A':
	  case 'E':
	  case 'I':
	  case 'O':
	  case 'U': x++;
   }
	printf("%d",x);
	
}
