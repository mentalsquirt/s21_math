/*
make debug to run tests without s21_sqrt and s21_fmod -> library analogs instead
make test when our lib is complete
tests show failed cases in the terminal
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "s21_math.h"

#define AMOUNT 1000

typedef struct {
  double *test_cases;
  int num_cases;
} function_t;


double random_double() {
  double x = ((double)rand() / RAND_MAX);
  double y = ((double)rand() / RAND_MAX);
  return log(y) / log(x);
}

#define TEST_FUNC(name) \
  for (i = 0; i < (int)(name##_func.num_cases/sizeof(double)); i++) { \
    double x = name##_func.test_cases[i]; \
    double y = name(x); \
    double s21_y = s21_##name(x); \
    if (fabs(y - s21_y) > EPSILON) { \
      printf(#name"(%f) = %f (default) != %f (custom)\n", x, y, s21_y); \
      wrongs++; \
    } else { \
      rights++; \
    } \
  } \
  for (j = 0; j < AMOUNT; j++) { \
    double x = random_double(); \
    double y = name(x); \
    double s21_y = s21_##name(x); \
    if (fabs(y - s21_y) > EPSILON) { \
      printf(#name"(%f) = %f (default) != %f (custom)\n", x, y, s21_y); \
      wrongs++; \
    } else { \
      rights++; \
    } \
  }

int main() {
  double cos_cases[] = {-2*M_PI, -1*M_PI, -0.5*M_PI, 0, 0.5*M_PI, 1*M_PI, 2*M_PI, M_PI/2, -M_PI/2, M_PI/4, -M_PI/4, M_PI/3, -M_PI/3, M_PI/6, -M_PI/6};
  double sin_cases[] = {-2*M_PI, -1*M_PI, -0.5*M_PI, 0, 0.5*M_PI, 1*M_PI, 2*M_PI, M_PI/2, -M_PI/2, M_PI/4, -M_PI/4, M_PI/3, -M_PI/3, M_PI/6, -M_PI/6};
  double tan_cases[] = {-M_PI/2, -M_PI/4, -M_PI/6, 0, M_PI/6, M_PI/4, M_PI/2};
  double acos_cases[] = {-1, -0.5, 0, 0.5, 1};
  double asin_cases[] = {-1, -0.5, 0, 0.5, 1};
  double atan_cases[] = {-1, -0.5, 0, 0.5, 1};

  function_t cos_func = {cos_cases, sizeof(cos_cases)};
  function_t sin_func = {sin_cases, sizeof(sin_cases)};
  function_t tan_func = {tan_cases, sizeof(tan_cases)};
  function_t acos_func = {acos_cases, sizeof(acos_cases)};
  function_t asin_func = {asin_cases, sizeof(asin_cases)};
  function_t atan_func = {atan_cases, sizeof(atan_cases)};

  int i;  // for the loop in macro
  int j;  // for the loop in macro
  int rights = 0;
  int wrongs = 0;

  TEST_FUNC(cos);
  TEST_FUNC(sin);
  TEST_FUNC(tan);
  TEST_FUNC(acos);
  TEST_FUNC(asin);
  TEST_FUNC(atan);

  double coverage = ((double)rights / ((double)rights + (double)wrongs)) * 100;

  printf("\n\n\n TEST COVERAGE is %d out of %d (%f per cent).\n", rights, rights + wrongs, coverage);
  
  return 0;
}
