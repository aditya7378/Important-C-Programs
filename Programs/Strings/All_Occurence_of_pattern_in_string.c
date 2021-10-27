#include <stdio.h>
 #include<string.h>
 int main()
 {
     char txt[] = "geeks for geeks";
     char pat[] = "eek";
     char *p = strstr(txt,pat);
    if(p == NULL){
        printf("not found");
        
    }
    while(p){
        printf("%ld \n",p-txt);
        p = strstr(p+1, pat);
        
        
    }
     
 }