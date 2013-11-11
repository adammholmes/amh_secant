/* amh_secant.h
 *
 * Secant method; find a root of f(x)
 *
 * Author: Adam M. Holmes
 */

#ifndef SECANT_H
#define SECANT_H

#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>


/* Given two start points and an iteration count, perform the secant method */
double secant_method (double (*f_ptr)(double), double, double, uint64_t);


#endif