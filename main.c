#include <stdio.h>
int checkPrecision(int, float *, int);
void getSqrt(int, float *);
void newLine() { printf("\n ========================================== \n"); }
int main() {
  newLine();
  printf("Enter a number you want to get squrare root of");
  int a, precision;
  float sqrt;
  scanf("%d", &a);
  printf("Enter the level of precision (decimals of precision) to calculate "
         "the square root");
  scanf("%d", &precision);
  while (checkPrecision(a, &sqrt, precision)) {
    getSqrt(a, &sqrt);
  }
}

int checkPrecision(int a, float *sqrt, int precision) {
  int numberToCompareWithPrecision = (int)(*sqrt) * precision * (*sqrt);
  int originalNumberWithPrecision = a * precision;
  return numberToCompareWithPrecision == originalNumberWithPrecision ? 0 : 1;
}

void getSqrt(int a, float *sqrt) { float half = ((float)a) / 2; }
