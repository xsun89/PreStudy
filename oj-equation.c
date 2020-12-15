//
// Created by Xin Sun on 2020-11-16.
//
#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double a = -20.0;
    double b = 20.0;
    double x = (a + b)/2.0;
    if(fabs(func(p, q, x)) <= EPSILON){
        return x;
    }
    while(fabs(func(p, q, x)) > EPSILON){
        if(func(p, q, x)  * func(p, q, a) < 0){
            b = x;
        }else if(func(p, q, x)  * func(p, q, b) < 0){
            a = x;
        }
        x = (a + b)/2.0;
    }

    return x;
}

double f(int p, int q, double x) {
    return p * x + q;
}
