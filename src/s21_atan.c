#include "s21_math.h"
#include <stdio.h>

#define ACCURACY 0.28

double s21_atan(double x) {
  double result, abs_x;
  abs_x = s21_fabs(x);
  if(abs_x < 1) {
    result = x / (1 + ACCURACY * x * x);
  } else {
    result = S21_PI / 2 - x / (x * x + ACCURACY);
  }
  if (x < 0) {
    result *= -1;
  }
  return result;
}  // atan(x) = atan(y) + atan((x-y)/(1+xy))
