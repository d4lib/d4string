#include "d4string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *d4concatenate(const char *destination, const char *source) {
    long unsigned int destinationLength = strlen(destination);
    long unsigned int sourceLength = strlen(source);
    long unsigned int totalLength = destinationLength + sourceLength + 1;

    char *result = (char *)malloc(totalLength * sizeof(char));

    for (long unsigned int i = 0; i < destinationLength; i++)
        result[i] = destination[i];

    for (long unsigned int i = 0; i < sourceLength; i++)
        result[destinationLength + i] = source[i];

    result[totalLength - 1] = '\0';

    return result;
}