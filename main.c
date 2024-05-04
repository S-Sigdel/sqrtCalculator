#include <stdio.h>
int checkPrecision(int, float *, int);
void getSqrt(int, float *);
void getprecision(int *);
void newLine() { printf("\n ========================================== \n"); }
int main() {
  newLine();
  printf("Enter a number you want to get squrare root of \t");
  int numberToGetSquareRoot, precision;
  scanf("%d", &numberToGetSquareRoot);
  float sqrt = ((float)numberToGetSquareRoot) / 2;
  newLine();
  printf("Enter the level of precision (decimals of precision) to calculate "
         "the square root\n !!! Make sure that the precision is less than 7, "
         "refer to ieee 754 for why!!!");
  newLine();
  scanf("%d", &precision);
  getSqrt(numberToGetSquareRoot, &sqrt);
  newLine();
  getprecision(&precision);
  checkPrecision(numberToGetSquareRoot, &sqrt, precision);
  printf("The square root of the number %d is %.2f", numberToGetSquareRoot,
         sqrt);
}

int checkPrecision(int a, float *sqrt, int precision) {
  int numberToCompareWithPrecision = (int)(*sqrt) * precision * (*sqrt);
  newLine();
  printf("num to compare: %d", numberToCompareWithPrecision);
  int originalNumberWithPrecision = a * precision;
  newLine();
  printf("num to orginal Number: %d", originalNumberWithPrecision);
  return numberToCompareWithPrecision == originalNumberWithPrecision ? 0 : 1;
}
void getprecision(int *precision) {
  int temp = *precision;
  *precision = 1;
  for (int i = 1; i <= temp; i++) {
    (*precision) *= 10;
  }
  newLine();
  printf("precision is: %d", *precision);
}
void getSqrt(int a, float *sqrt) {}
