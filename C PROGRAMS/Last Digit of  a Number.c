/*
****************************************************
Aim :- To Find the last digit of the number

for example

    i/o = 253
    o/p = 3



****************************************************

*/
#include<stdio.h>
int main()
{
    int num,last_digit;
    printf("Enter a number to find its last digit\n");
    scanf("%d", &num);
    if(num<0)
    {
        last_digit = -(num % 10);
        printf("The last digit is %d", last_digit);

    }
    else
    {
        last_digit = num % 10;
        printf("The last digit is %d", last_digit);
    }

}
