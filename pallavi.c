#include <stdio.h>

int main()
{
  int n;
  int i,j;
  printf("enter the size of the pattern");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
