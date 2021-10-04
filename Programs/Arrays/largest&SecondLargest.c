/******************************************************************************


Write your code to find the Largest and the Second Largest Element of Array 

*******************************************************************************/

#include <stdio.h>

int main ()
{
  int a[] = { 10, 20, 45, 30 };
  int res = -1;
  int l = 0;
  int i;
  for (i = 1; i < sizeof (a) / sizeof (a[0]); i++)
    {
      if (a[i] > a[l])
	{
	  res = l;
	  l = i;

	}

      else if (a[i] != a[l])
	{
	  if (res = -1 || a[i] > a[res])
	    {
	      res = i;
	    }
	}
    }
  printf ("%d \n", a[res]);
  printf ("%d", a[l]);
}
