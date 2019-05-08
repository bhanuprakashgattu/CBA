#include <stdio.h>

int main()
{
  int n;
  int i,j;
  printf("enter the size of the pattern");
  scanf("%d",&n);
  for(i=1;i<n-1;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}
