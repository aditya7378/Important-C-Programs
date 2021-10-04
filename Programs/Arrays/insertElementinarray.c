#include<stdio.h>
int main()
{
    int arr[] = {1,2,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);

    int num,i,loc;
    printf(" \n ENTER A NUMBER\n");
    scanf("%d", &num);
    printf(" \n ENTER A POSITION\n");
    scanf("%d", &loc);
    int pos = loc-1;

    for(i=n-1; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = num;


    for ( int i = 0; i <= sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d", arr[i]);
    }

}
