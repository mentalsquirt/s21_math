#include "s21_math.h"

long double s21_asin(double x) {
  return s21_atan(x / sqrt(1 - x * x));
}
