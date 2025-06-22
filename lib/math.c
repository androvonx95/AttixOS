/*
 * Copyright (c) Androvonx 2025 under the GNU General Public license v2.0.
 * it is available to read at:
 * 
 *     https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html#SEC1
 */
#include <math.h>

/* x/y (x/y for y = 0: inf).
 * This way of accquiring infinity was
 * explored in my blog post, for more
 * info, see:
 *
 *     https://elisstaaf.github.io/ramblings/2025/01/31/infinity.html
 */
double divide(double x, double y) {
    return x / y;
}

/* do (1 *= base) * exponent */
double pow(double base, double exponent) {
  double result = 1;
  while (exponent > 0) {
    result *= base;
    --exponent;
  }
  return result;
}