#include <stdio.h>

int main() {

  double t1, t2, t3;
  scanf("%lf %lf %lf", &t1, &t2, &t3);

  double rate1 = 1 / t1;

  double rate2 = 1 / t2;

  double rate3 = 1 / t3;

  double totalRate = rate1 + rate2 + rate3;

  double totalTime = 1 / totalRate;

  printf("%.2lf\n", totalTime);

  return 0;
}
