#include "d4string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

d4size_t d4length(const char *source) {
    d4size_t result = 0;
    int i = 0;
    while (source[i] != '\0') {
        result++;
        i++;
    }
    return result;
}

char *d4concatenate(const char *destination, const char *source) {
    d4size_t destinationLength = d4length(destination);
    d4size_t sourceLength = d4length(source);
    d4size_t totalLength = destinationLength + sourceLength + 1;

    char *result = (char *)malloc(totalLength * sizeof(char));

    for (d4size_t i = 0; i < destinationLength; i++)
        result[i] = destination[i];

    for (d4size_t i = 0; i < sourceLength; i++)
        result[destinationLength + i] = source[i];

    result[totalLength - 1] = '\0';

    return result;
}

char *d4nconcatenate(const char *destination, char *source, d4size_t size) {
    char *copySource = (char *)malloc((d4length(source) + 1) * sizeof(char));
    strcpy(copySource , source);

    d4size_t sourceLength = d4length(copySource) + 1;
    copySource[size + 1] = '\0';

    d4size_t destinationLength = d4length(destination);
    d4size_t totalLength = destinationLength + sourceLength + 1;
    char *result = (char *)malloc(totalLength * sizeof(char));

    for (d4size_t i = 0; i < destinationLength; i++) {
        result[i] = destination[i];
    }

    for (d4size_t i = 0; i < sourceLength; i++) {
        result[destinationLength + i] = copySource[i];
    }

    result[totalLength - 1] = '\0';
    return result;
}

char *d4strcharacter(const char *destination, char character) {
    d4size_t destinationLength = d4length(destination);
    
    char *result = (char *)malloc((d4length(destination) + 1));
    d4size_t counter = 0;
    for (d4size_t i = 0; i < destinationLength; i++) {
        if (destination[i] == character) {
            break;
        }
        counter++;
    }
    
    int i = 0;

    while (counter < destinationLength) {
        result[i] = destination[counter];
        i++;
        counter++;
    }

    return result;
}

char *d4strcharacterptr(const char *destination, char character) {
    for (const char *ptr = destination; *ptr != '\0'; ++ptr) {
        if (*ptr == character) {
            return (char *)ptr;
        }
    }
    return D4NULL;
}

char *d4strrcharacterptr(const char *destination, char character) {
    const char *result = D4NULL;

    for (const char *ptr = destination; *ptr != '\0'; ++ptr) {
        if (*ptr == character) {
            result = ptr;
        }
    }

    return (char *)result;
}

d4size_t *d4compare(char *string1, char *string2) {

}