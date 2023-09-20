#include <stdio.h>
#include <limits.h>

int main()
{
    // CHAR
    printf("char max: %d\n", CHAR_MAX);
    printf("char min: %d\n", CHAR_MIN);
    printf("unsigned char max: %d\n", UCHAR_MAX);
    printf("signed char max: %d\n", SCHAR_MAX);
    printf("signed char min: %d\n", SCHAR_MIN);
    printf("\n");
    // INT
    printf("int max: %d\n", INT_MAX);
    printf("int min: %d\n", INT_MIN);
    printf("unsigned int max: %llu\n", UINT_MAX);
    printf("\n");
    // SHORT INT
    printf("short int max: %d\n", SHRT_MAX);
    printf("signed short int max: %d\n", SHRT_MIN);
    printf("unsigned short int max: %d\n", USHRT_MAX);
    printf("\n");
    // LONG INT
    printf("long int max: %d\n", LONG_MAX);
    printf("signed long int max: %d\n", LONG_MIN);
    printf("unsigned long int max: %llu\n", ULONG_MAX);
    printf("\n");
    // LONG LONG INT
    printf("long long int max: %llu\n", LLONG_MAX);
    printf("signed long long int max: %lld\n", LLONG_MIN);
    printf("unsigned long long int max: %llu\n", ULLONG_MAX);
    printf("\n");

    return 0;
}