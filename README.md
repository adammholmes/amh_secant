amh_secant
----------

An implementation of the secant method for finding roots of a function.
The secant method converges slower than Newton's method (superlinear vs.
quadratic), but the secant method does not require a derivative.

The included test in 'main.c' uses the secant method to attempt to find a
root of cos(x), using four iterations and initial points of 0 and 2. In 
just four iterations, the secant method finds a root of cos(x) with more
than 16 digits of accuracy!

usage
-----

```
make
./amh_secant
```

To change f(x), the initial points, or the number of iterations - read the
comments in 'main.c'.
