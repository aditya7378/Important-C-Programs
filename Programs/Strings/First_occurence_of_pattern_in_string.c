#include <stdio.h>
#include<string.h>
 int main()
 {
     char txt[] = "geeks for geeks";
     char pat[] = "eek";
     char *p = strstr(txt,pat);
     if(p){
         printf("found at %ld", p-txt);
     }
     else{
         printf("Not found");
     }
     
     
 }