#include <stdio.h>
#include<string.h>
 int main()
 {
     char str[100];
     scanf("%s", str);
     int base=1,sum=0,i;
     int l = strlen(str) - 1;
     for(i=l; i>=0; i--)
     {
         int convert = str[i] - 48;
         sum = sum+(convert*base);
         base = base*2;
     }
     printf("%s\n", str);
     printf("%d", sum);
     
     
     
 }