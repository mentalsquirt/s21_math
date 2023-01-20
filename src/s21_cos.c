#include "s21_math.h"
#define ACCURACY 100000

long double s21_cos(double x) {
  double result = 1, term = 1;
  x = s21_fmod(x, 2 * S21_PI);
  for (int i = 1; i <= ACCURACY; i++) {
    term *= (-x * x) / ((2 * i - 1) * (2 * i));
    result += term;
  }
  return result;
}  // Taylor series expansion
