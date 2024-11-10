#include "d4string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long unsigned int d4length(const char *source) {
    long unsigned int result = 0;
    int i = 0;
    while (source[i] != '\0') {
        result++;
        i++;
    }
    return result;
}

char *d4concatenate(const char *destination, const char *source) {
    long unsigned int destinationLength = d4length(destination);
    long unsigned int sourceLength = d4length(source);
    long unsigned int totalLength = destinationLength + sourceLength + 1;

    char *result = (char *)malloc(totalLength * sizeof(char));

    for (long unsigned int i = 0; i < destinationLength; i++)
        result[i] = destination[i];

    for (long unsigned int i = 0; i < sourceLength; i++)
        result[destinationLength + i] = source[i];

    result[totalLength - 1] = '\0';

    return result;
}

char *d4nconcatenate(const char *destination, char *source, long unsigned int size) {
    char *copySource = (char *)malloc((d4length(source) + 1) * sizeof(char));
    strcpy(copySource , source);

    long unsigned int sourceLength = d4length(copySource) + 1;
    copySource[size + 1] = '\0';

    long unsigned int destinationLength = d4length(destination);
    long unsigned int totalLength = destinationLength + sourceLength + 1;
    char *result = (char *)malloc(totalLength * sizeof(char));

    for (long unsigned int i = 0; i < destinationLength; i++) {
        result[i] = destination[i];
    }

    for (long unsigned int i = 0; i < sourceLength; i++) {
        result[destinationLength + i] = copySource[i];
    }

    result[totalLength - 1] = '\0';
    return result;
}