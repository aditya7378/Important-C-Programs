//Find the greatest of three no

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Number One..!!!\n");
    scanf("%d", &a);
    printf("Enter Number Two..!!!\n");
    scanf("%d", &b);
    printf("Enter Number Three..!!!\n");
    scanf("%d", &c);

    //Logic

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is Largest Among All..!!!", a);

        }
        else
        {
            printf("%d is Largest Among All..!!!", c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is Largest Among All..!!!", b);
        }
        else{
            printf("%d is Largest Among All..!!!", c);
        }
    }

}
