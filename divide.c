#include "exception_handler.h"

int divide(int num, int denom) {
    if (0 == denom) THROW(DIV_BY_ZERO);
    return num / denom;
}