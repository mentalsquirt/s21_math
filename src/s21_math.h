#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#define S21_PI 3.14159265358979324
#define S21_EPS 1e-17
#define S21_NAN 0.0 / 0.0

double s21_convert(double x);

double s21_fabs(double x);

double s21_sin(double x);
double s21_cos(double x);
double s21_tan(double x);

double s21_asin(double x);
double s21_acos(double x);
double s21_atan(double x);

#endif  // SRC_S21_MATH_H_