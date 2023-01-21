#include "s21_math.h"
#define ACCURACY 100000

long double s21_atan(double x) {
  double res;
  if (x > 1) {
    res = S21_PI / 2 - s21_atan(1 / x);
  } else if (x < -1) {
    res = -S21_PI / 2 + s21_atan(1 / x);
  } else {
    double x2 = x * x;
    res = x;
    double term = x;
    int i = 3;
    for (int j = 0; j < ACCURACY; j++) {
      term *= -x2 * (i - 2) / i;
      res += term;
      i += 2;
    }
  }
  return res;
}  // Taylor series expansion
