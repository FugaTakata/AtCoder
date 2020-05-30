#include <math.h>
#include <stdio.h>

double function(double x);
double regula_falsi(double a, double b, double accuracy);

int main(void) {
  printf("%lf\n", regula_falsi(-3.5, 3.5, 0.01));
  return 0;
}

double function(double x) {
  return 1 / sqrt(2 * M_PI) * exp(x * x / (-2.0)) + sin(M_PI * x) / 10;
}

double regula_falsi(double a, double b, double accuracy) {
  double c = (a * function(b) - b * function(a)) / (function(b) - function(a));
  if (fabs(function(a) - function(b)) <= accuracy) {
    return c;
  }
  if ((0 < function(a) && 0 < function(c)) ||
      (function(a) < 0 && function(c) < 0)) {
    return regula_falsi(c, b, accuracy);
  } else {
    return regula_falsi(a, c, accuracy);
  }
}
