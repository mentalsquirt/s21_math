#include "s21_math.h"

long double s21_asin(long double x) {
  int status = 1;
  long double result = 0;
  if (s21_isnan(x) || s21_isinf(x)) {
    status = 0;
  } else {
    if (x == 1.0)
      result = S21_PI / 2;
    else if (x == (-1.0))
      result = -S21_PI / 2;
    else
      result = s21_atan((x) / s21_sqrt(1 - s21_pow(x, 2)));
  }
  return status ? result : S21_NAN;
}
