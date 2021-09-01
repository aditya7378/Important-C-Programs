/*Aim:- Sum of N natural numbers
For Example
i/o:- 5
o/p:- 15
so whats happening here is if you provide 5 as input it should add all numbers till 5
i.e 5 = 1+2+3+4+5
 o/p = 15*/

 #include<stdio.h>
 int main()
 {
     int n, sum=0,i;
     int method;
     printf("Choose a method for finding sum of N Natural No\n 1)Using for Loop \n 2)Using Formula\nEnter Your Choice here :- ");
     scanf("%d", &method);
     printf("Great Choice...!!!!\nLets start the program\n");
     printf("Enter a Number\n");
     scanf("%d", &n);

     if(method==1)
     {
            for(i=1;i<=n;i++)
             {
                 sum+=i;
             }
             printf("The sum is %d", sum);

     }
     else
     {
        sum = (n*(n+1))/2 ;
        printf("The sum is %d", sum);

     }

 }
