/******************************************************************************

LEFT ROTATE A ARRAY BY ONE 
I/P = 10,20,30,40
O/P = 20,30,40,10

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int arr[] = { 10, 20, 30, 40 };
  int temp = arr[0];
  int n = sizeof (arr) / sizeof (arr[0]);
  for (int i = 1; i < n; i++)
    {
      arr[i - 1] = arr[i];

    }
  arr[n - 1] = temp;
  for (int i = 0; i < n; i++)
    {
      printf ("%d \t", arr[i]);
    }
}
