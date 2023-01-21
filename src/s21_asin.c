#include "s21_math.h"

long double s21_asin(double x) {
  #ifdef DEBUG
  long double res = s21_atan(x / sqrt(1 - x * x));
  #else 
  long double res = s21_atan(x / s21_sqrt(1 - x * x));
  #endif
  return res;
}
