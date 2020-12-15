//
// Created by Xin Sun on 2020-10-20.
//
#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include <stdarg.h>
int max_int(int n, ...)
{
    int ret = INT32_MIN;
    va_list arg;
    va_start(arg, n);
    while(n--){
        int temp = va_arg(arg, int);
        if(temp > ret){
            ret = temp;
        }
    }

    return ret;
}
int factorial(int x)
{
    if(x == 1){
        return 1;
    }
    return x*factorial(x-1);
}
int binarySearch(int (*arr)(int), int n, int x)
{
    int head = 1, tail = n, mid;
    while(head <= tail){
        mid = (tail + head) >> 1;
        if(arr(mid) == x){
            return mid;
        }

        if(x > arr(mid)){
            head = mid + 1;
        }else{
            tail = mid - 1;
        }
    }
    return -1;
}
int main()
{
    printf("%d\n", max_int(3, 1, 4, 6));
    printf("%d\n", max_int(4,2, 10, 15, 34));
    return 0;
}
