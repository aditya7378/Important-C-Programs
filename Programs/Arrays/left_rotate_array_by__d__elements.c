/******************************************************************************

LEFT ROTATE A ARRAY BY D ELEMENTS
I/P = 10,20,30,40
O/P = 30,40,10,20

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int arr[] = { 10, 20, 30, 40 };
  int n = sizeof(arr)/sizeof(arr[0]);
  int d;
  scanf("%d", &d);
  int temp[d];
  for(int i = 0 ; i<d ; i++)
  {
      temp[i] = arr[i];

  }
  for(int i = d ; i<n ; i++)
  {
      arr[i-d] = arr[i];
  }
  for(int i =0 ; i<d; i++)
  {
      arr[n-d+i] = temp[i];
  }
  for(int i = 0 ; i<n; i++ )
  {
      printf("%d \t", arr[i]);
  }
}
