#include "s21_math.h"

double s21_fabs(double x) {
  return x < 0 ? x * -1 : x;
}
