#include "s21_math.h"

long double s21_convert(long double x) {
  while (x > S21_PI || x < -S21_PI) {
    x += x > S21_PI ? -2 * S21_PI : 2 * S21_PI;
  }
  return x;
}
