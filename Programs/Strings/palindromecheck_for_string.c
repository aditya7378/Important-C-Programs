#include <stdio.h>
#include<string.h>
 int main()
 {
     char str[] = "abaa";
     int high = strlen(str)-1;
     
     int low=0;
     while(low<high)
     {
         if(str[low] == str[high])
         {
             low++;
             high--;
             
         }
         else{
             printf("No");
             break;
         }
     }
     printf("Yes");
     
     
     
 }