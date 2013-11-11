/* amh_secant.c
 *
 * Secant method; find a root of f(x)
 *
 * Author: Adam M. Holmes
 */

#include "amh_secant.h"


static double
iteration (double (*f_ptr)(double), double x_i_m1, double x_i_m2)
{
  double num = (x_i_m1 - x_i_m2); 
  double den = (f_ptr(x_i_m1) - f_ptr(x_i_m2));
  double diff = (f_ptr(x_i_m1) * (num / den));

  return (x_i_m1 - diff);
}


double
secant_method (double (*f_ptr)(double), double x0, double x1, uint64_t n)
{
  // Perform the first two iterations (if called for)
  if (n == 0) return x1;
  double res0 = iteration(f_ptr, x0, x1);
  if (n == 1) return res0;
  double res1 = iteration(f_ptr, x1, res0);

  // Perform n - 2 iterations
  uint64_t i; for (i = 2; i != n; i++) {
    res0 = iteration(f_ptr, res0, res1);
    if ((i + 1) == n) return res0;
    res1 = iteration(f_ptr, res1, res0);
  }

  return res1;
}
