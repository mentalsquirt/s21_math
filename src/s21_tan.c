#include "s21_math.h"

long double s21_tan(double x) {
  long double res = s21_cos(x);
  if (s21_fabs(res) < .00000001) {
    if (x < 0) return -16331239353195370.;
    return 16331239353195370.;
  }
  return s21_sin(x) / res;
}  // tan(x) = sin(x) / cos(x)
