//
// Created by Xin Sun on 2020-10-20.
//
#include <stdio.h>
#include <math.h>
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

}
