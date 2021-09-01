#include<stdio.h>
int main()
{
    int choice,a,b,c;
    printf("Enter Number for operation\n");
    scanf("%d%d", &a,&b);
    printf("Enter Your Choice \n 1)Add \n 2)Subtract \n 3)Multiply \n 4)Divide\n");
    scanf("%d", &choice);


    switch(choice)
    {
        case 1:
            c = a+b;
            printf("The Addition of %d & %d is %d", a,b,c);
            break;
        case 2:
            c = a-b;
            printf("The Subtraction of %d & %d is %d", a,b,c);
            break;

        case 3:
            c = a*b;
            printf("The Multiplication of %d & %d is %d", a,b,c);
            break;

        case 4:
        c = a/b;
        printf("The Division of %d & %d is %d", a,b,c);
        break;

    default:
        printf("Enter Valid Choice...!!!");
    }
}
