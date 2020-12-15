//
// Created by Xin Sun on 2020-11-12.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define offset(T, a) (long)(&(((T *)(NULL))->a))
struct data
{
    int a;
    double b;
    char c;
};
int main(int argc, char* argv[])
{
    int *tmp = malloc(sizeof(5));
    memset(tmp, 0, sizeof(5));
    *tmp = 0x61626364;
    printf("%s, sizeof(tmp)=%d\n", (char *)tmp, sizeof(*tmp));
    printf("%ld\n", offset(struct data, a));
    printf("%ld\n", offset(struct data, b));
    printf("%ld\n", offset(struct data, c));

    return 0;
}
