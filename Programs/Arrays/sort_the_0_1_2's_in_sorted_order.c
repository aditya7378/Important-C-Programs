/******************************************************************************
Write a Code to Sort the 0's , 1's , 2's in a array in a sorted manner

i/p = 020102
o/p = 000122


*******************************************************************************/
#include<stdio.h>
void
sort012 (int a[], int n)
{
  int new[n];
  int count = 0;
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  if (a[j] == i)
	    {
	      new[count] = a[j];
	      count++;
	    }

	}

    }
  for (int i = 0; i < n; i++)
    {
      a[i] = new[i];
    }


}

int
main ()
{


  int n;
  scanf ("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }

  sort012 (arr, n);

  for (int i = 0; i < n; i++)
    {
      printf ("%d \t", arr[i]);
      //printf("\n");
    }
  return 0;
}
