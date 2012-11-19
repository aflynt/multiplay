#include "multiplay.h"

int solicit_ppl(void)
{
  printf("Give me two numbers:");
  return (0);
}

int prn_result(double n1, double n2)
{
  printf("%f times %f = %f\n", n1,n2, n1*n2);

  return 0;
}

int getJoyNum(void)
{
  int opt = -1;
  do
  {
    printf("Give me a num [1 2 3 4]: ");
    scanf("%d",&opt);
  }
  while(opt < 1 || opt > 4);
  return opt;
}


int prnJoy(int opt)
{
  int i,j;
  for (i = 0; i < opt ; i++){
    for (j = 0; j < i ; j++)
      printf("Hi ");
    printf("\n");
  }
  for (i = opt; i > 0 ; i--){
    for (j = 0; j < i ; j++)
      printf("Hi ");
    printf("\n");
  }
  return 0;
}

