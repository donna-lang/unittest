#include <math.h>

long donna_unittest_float_equal(double actual, double expected) {
    return actual == expected ? 1L : 0L;
}

long donna_unittest_float_near(double actual, double expected, double tolerance) {
    if (tolerance < 0.0) return 0L;
    return fabs(actual - expected) <= tolerance ? 1L : 0L;
}
