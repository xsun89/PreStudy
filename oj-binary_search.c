//
// Created by Xin Sun on 2020-11-05.
//

#include <stdio.h>
#include <math.h>
int binarySearch(int *arr, int n, int x)
{
    int head = 0, tail = n-1, mid;
    while(head <= tail)
    {
        mid = (head + tail) >> 1;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x){
            head = mid + 1;
        }else{
            tail = mid -1;
        }
    }

    return -1;
}

int main()
{
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i] = i*i;
    }
    int x;
    while(scanf("%d", &x) != EOF)
    {
        int ret = binarySearch(arr, 10, x);
        printf("%d * %d = %d\n", ret, ret, x);
    }
    return 0;
}