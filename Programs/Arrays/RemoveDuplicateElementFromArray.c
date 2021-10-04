/******************************************************************************

Remove Duplicate element from array
*******************************************************************************/
#include <stdio.h>

int
main ()
{

  int a[] = { 10, 20, 20, 30, 30, 40 };
  int n = sizeof (a) / sizeof (a[0]);
  int t[n];
  t[0] = a[0];
  int res = 1;
  for (int i = 1; i < n; i++)
    {
      if (a[i] != t[res - 1])
	{
	  t[res] = a[i];
	  res++;
	}
    }
  // int m = sizeof(t)/sizeof(t[0]);

  for (int i = 0; i < res; i++)
    {
      printf ("%d \t", t[i]);
    }
}
