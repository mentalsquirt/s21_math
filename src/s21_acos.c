#include "s21_math.h"

long double s21_acos(long double x) {
  int status = 1;
  if (s21_isnan(x) || s21_isinf(x)) status = 0;
  return status ? (S21_PI / 2. - s21_asin(x)) : S21_NAN;
}
