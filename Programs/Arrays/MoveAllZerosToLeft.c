/******************************************************************************
SHIFTING ALL ZERO'S IN A ARRAY TO THE RIGHT

I/P = 8 , 5 , 0 , 10 , 0 , 20
O/P = 8,5,10,20,0,0
*******************************************************************************/
#include <stdio.h>




int
main ()
{

  int a[] = { 8, 5, 0, 10, 0, 20 };
  int n = sizeof (a) / sizeof (a[0]);
  int count = 0;
  for (int i = 0; i < n; i++)
    {
      if (a[i] != 0)
	{
	  int temp = 0;
	  temp = a[count];
	  a[count] = a[i];
	  a[i] = temp;

	  count++;
	}
    }


  for (int i = 0; i < n; i++)
    {
      printf ("%d\t", a[i]);


    }
}
