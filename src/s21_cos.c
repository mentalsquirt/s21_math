#include "s21_math.h"

long double s21_cos(long double x) {
  x = s21_convert(x);
  return s21_sin((S21_PI / 2.0) - x);
}
