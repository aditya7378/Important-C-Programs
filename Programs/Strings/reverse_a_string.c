#include <stdio.h>
#include<string.h>
 int main()
 {
     char str[] = "aditya";
     char newstr[100];
     int l = strlen(str)-1;
     int i=0;
     while(str[i]!=0)
     {
         newstr[i] = str[l];
         i++;
         l--;
     }
     printf("%s\n",str);
     printf("%s", newstr);
     
     
 }