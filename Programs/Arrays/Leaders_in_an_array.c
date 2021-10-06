/******************************************************************************

FIND LEADERS IN A ARRAY 
LEADER = A ELEMENT IN A ARRAY AFTER WHICH ALL THE ELEMENTS TO ITS RIGH SIDE ARE SMALLER THAN HIM
I/P = 7,10,4,10,6,5,2
O/P = 2,5,6,10
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[] = {7,10,4,10,6,5,2};
    int n = sizeof(a)/sizeof(a[0]);
    int curr = a[n-1];
    printf("%d\t", curr);
    for(int i=n-2; i>=0;i--)
    {
        if(curr<a[i])
        {
            curr = a[i];
            printf("%d \t", curr);
        }
        
        
    }
    
}
