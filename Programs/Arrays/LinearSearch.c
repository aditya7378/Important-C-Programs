#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int num,i;
    printf(" \n ENTER A NUMBER\n");
    scanf("%d", &num);

    for(i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            printf("Number Present");
        }
    }
    
}