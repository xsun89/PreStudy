//
// Created by Xin Sun on 2020-10-28.
//
#include <stdio.h>
#define swap(a, b) { \
    __typeof(a) temp = a; \
    a = b;           \
    b = temp;        \
}

int main()
{
    int n;
    scanf("%d", &n);
    fprintf(stdout, "%d\n", n);
    char str[1000] = {0}, buffer[1000] = {0}, *p = str, *q = buffer;
    sprintf(p, "%d.%d.%d.%d", 192, 28, 3, 1);
    printf("%s\n", str);

    if(n & 1){
        sprintf(q, "(%s)", p);
        swap(p, q);
    }
    if(n & 2){
        sprintf(q, "[%s]", p);
        swap(p, q);
    }
    if(n & 4){
        sprintf(q, "[%s]", p);
        swap(p, q);
    }

    printf("Final %s\n", p);
    return 0;
}