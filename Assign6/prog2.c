#include <stdio.h>
void main()
{
  int n, s[25], a = 1, d = 1, i;
  printf("Enter array length:");
  scanf("%d", &n);
  printf("Enter array elements:");
  for (i = 0; i < n; i++)
    scanf("%d", &s[i]);
  i = 0;
  while((a == 1 || d == 1) && i < n - 1)
  {
    if (s[i] < s[i+1])
      d = 0;
    else if (s[i] > s[i+1])
      a = 0;
    i++;
  }
  if (a == 1)
    printf("The array is sorted in ascending order.\n");
  else if (d == 1)
    printf("The array is sorted in descending order.\n");
  else
    printf("The array is not sorted.\n");
}
