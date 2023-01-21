#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#define S21_PI 3.14159265358979323846
#define S21_EPS 1e-17
#define S21_NAN 0.0 / 0.0
#define EPSILON 0.00001

#ifdef DEBUG
#include <math.h>
#endif  // DEBUG

long double s21_fabs(double x);

long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);

long double s21_asin(double x);
long double s21_acos(double x);
long double s21_atan(double x);

#endif  // SRC_S21_MATH_H_
