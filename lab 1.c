#include <stdio.h>

int main(void)
{
int N,i,j;
scanf("%d", &N);

  for(i=1;i<=N;++i)
  {
      for(j=1;j<=i;++j)
      printf("*");
      while(j<=N)

  {
      printf("#");
      ++j;
  }

     printf("\n");


  }


      return 0;
  }

