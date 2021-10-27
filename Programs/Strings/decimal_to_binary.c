#include <stdio.h>
#include<string.h>
#include<conio.h>
 int main()
 {
     char bin[100];
     
     char ans[100];
     int rem;
     int n;
     scanf("%d",&n);
     
     
     //scanf("%d", &n);
     int temp = n;
     int i=0;
     while(temp>0)
     {
         rem = temp % 2;
         char con = rem+48;
         bin[i] = con;      //1 0 1
         i++;
         temp = temp/2;
         
     }
     int k= strlen(bin) -1;
     
     int j=0;
     while(bin[j] != '\0')
     {
         ans[j] = bin[k];
         printf("%c\n", ans[j]);
         
         j++;
         k--;
        
     }
     getch();
    //  printf("%d\n", n);
    //  printf("%s", ans);
     
     
 }