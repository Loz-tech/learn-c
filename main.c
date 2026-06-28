#include <stdio.h>
#include <limits.h>

int main() {
    // Learning a small amount of common types in c
    // types in c programming languages
    int someNum = 0;
    char someChar = 'c';
    float someFloat = 0.0f;
    bool someBoolean = true;
    double someDouble = 0.00;\
    unsigned int someUnsignedInteger = 2;
    long unsigned int someLongInteger = 2131234122;
    //long int toBigInteger = 123123123123123123123123123223123;
    long int maxValueOfLongInt = LONG_MAX;

    printf("Some integer %d\n", someUnsignedInteger);
    printf("Some long integer %d\n", someLongInteger);
    //printf("This integer to big to feet into memory of type long int 123123123223123: \n %ld \n", toBigInteger);
    printf("this is the max amount if long int can feet: %ld", maxValueOfLongInt);

    return 0;
}