#include "sum.h"
#include <assert.h>  /* assert */
#include <stdio.h>   /* printf */

int sum(int a[], int n)
{
    /* pre-condition */
  assert (n >= 0);

  /* post-condition */
  if(n == 0)
    return 0;
  else
    return (a[n-1]+sum(a, n-1));
}