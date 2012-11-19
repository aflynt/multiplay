#include "multiplay.h"

int main(char argc, char *argv[])
{
  int i;
  double n1, n2;

  prnJoy(getJoyNum());

  solicit_ppl();

  while(scanf("%lf%lf",&n1,&n2)!= EOF){
    prn_result(n1,n2);
    solicit_ppl();
  }

  printf("\n");
  return 0;
}
