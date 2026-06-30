#include <stdio.h>
#include <limits.h>

int main() {
    // Learning a small amount of common types in c
    // types in c programming languages
    // Basic variable types in C with descriptions:
    // short - short integer type, typically 2 bytes, smaller range than int
    short someShort = 0;

    // long long - extended integer type, typically 8 bytes, larger range than long
    long long someLongLong = 0LL;

    // unsigned char - character type that only stores non-negative values (0-255)
    unsigned char someUnsignedChar = 255;

    // long double - extended precision floating point, typically 8-16 bytes
    long double someLongDouble = 0.0L;

    // size_t - unsigned type for sizes and memory offsets (from stddef.h)
    size_t someSize = sizeof(int);

    // int - integer type, typically 4 bytes, stores whole numbers
    int someNum = 0;

    // char - character type, 1 byte, stores a single character
    char someChar = 'c';

    // float - single precision floating point, typically 4 bytes
    float someFloat = 0.0f;

    // bool - boolean type (requires stdbool.h), stores true or false
    bool someBoolean = true;

    // double - double precision floating point, typically 8 bytes
    double someDouble = 0.00;

    // unsigned int - integer that only stores non-negative values
    unsigned int someUnsignedInteger = 2;

    // long unsigned int - extended unsigned integer type
    long unsigned int someLongInteger = 2131234122;

    // long int - extended integer type for larger whole numbers
    long int maxValueOfLongInt = LONG_MAX;

    printf("Some integer %d\n", someUnsignedInteger);
    printf("Some long integer %d\n", someLongInteger);
    //printf("This integer to big to feet into memory of type long int 123123123223123: \n %ld \n", toBigInteger);
    printf("this is the max amount if long int can feet: %ld", maxValueOfLongInt);

    return 0;
}
