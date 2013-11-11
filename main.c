/* main.c
 *
 * Test the secant method implementation on a user defined function
 *
 * Author: Adam M. Holmes
 */

#include <math.h>
#include "amh_secant.h"


/* f(x) */
double
f (double x)
{
  return cos(x);
}


int
main ()
{
  double (*f_ptr)(double);
  f_ptr = &f;

  /* Four iterations of the secant method on f(x), with starting
   * points of 0 and 2.
   */
  printf("%.16f\n", secant_method(f_ptr, 0, 2, 4));
}
