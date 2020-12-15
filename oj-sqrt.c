//
// Created by Xin Sun on 2020-11-05.
//

#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7
#define DEBUG
#ifdef DEBUG
#define log(fmt, arg...) { \
    printf("[%s : %s : %d ", __FILE__, __func__, __LINE__); \
    printf(fmt, ##arg);    \
    printf("\n");          \
}
#else
#define log(fmt, arg...)
#endif

double func(double x){
    return x*x;
}
double my_sqrt(double (*f)(double), double x)
{
    double head = 0, tail = x, mid;
    if(x < 1.0){
        tail = 1.0;
    }

    while(tail-head > EPSILON)
    {
        mid = (head + tail) /2.0;
        if(func(mid) == x) return mid;
        if(func(mid) < x){
            head = mid;
        }else{
            tail = mid;
        }
    }

    return head;
}

double F(double x, double n)
{
    return x*x - n;
}
double f(double x){
    return 2*x;
}

double newTon(double (*F)(double, double), double (*f)(double), double n)
{
    double x = n / 2.0;
    while (fabs(F(x, n)) > EPSILON) {
        x = x - F(x, n)/f(x);
    }

    return x;
}
double newTonSqrt(double x)
{
    return newTon(F, f, x);
}

int arr(int (*num)[5])
{
    printf("num=%p, num+1=%p\n", num, num+1);
    return 0;
}
int main()
{
    double x;
    while(scanf("%lf", &x) != EOF)
    {
        double ret = my_sqrt(func, x);
        double n_ret = newTon(F, f, x);
        printf("sqrt(%g) = %g\n", x, sqrt(x));
        printf("my_sqrt(%g) = %g\n", x, ret);
        printf("newTonSqrt(%g) =  %g\n", x, n_ret);
        log("newTonSqrt(%g) =  %g", x, n_ret);
    }
}