#include "s21_math.h"

long double s21_sin(long double x) {
  x = s21_convert(x);
  long double res = x, y = x, i = 1.;
  while (s21_fabs(res) > S21_EPS) {
    res = -1 * res * x * x / (2 * i * (2 * i + 1));
    i += 1.;
    y += res;
  }
  return y;
}
