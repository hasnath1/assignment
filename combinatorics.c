#include <stdio.h>
#include <stdlib.h>

int c(int n, int r)
{

  if (r > n || r < 0)
  {
    printf("Error : r can not be bigger than n or less than 0\n");
    exit(0);
    return 0;
  }

  if (r == 0 || r == n)
    return 1;

  int z = r < n - r ? r : n - r;

  int up = 1, down = 1;

  for (int i = 0; i < z; i++)
  {
    up *= (n - i);
  }

  while (z > 0)
  {
    down *= z;
    z--;
  }

  return up / down;
}