#include "s21_math.h"

long double s21_tan(long double x) {
  int status = 1;
  if (s21_isnan(x) || s21_isinf(x)) status = 0;
  return status ? (s21_sin(x) / s21_cos(x)) : S21_NAN;
}
