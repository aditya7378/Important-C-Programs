#include <stdio.h>
#include<string.h>
 int main()
 {
     char txt[] = "geeks-for-geeks, c course";
     const char *sep = "- ,";
     char *p = strtok(txt,sep);
     while(p!=0){
         printf("%s", p);
         p = strtok(NULL, sep);
     }
     
     
 }