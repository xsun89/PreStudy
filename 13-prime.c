//
// Created by Xin Sun on 2020-10-29.
//
#include <stdio.h>
#define max_n 100
int prime[max_n + 5];
int init()
{
    for(int i=2; i<=max_n; i++){
        if(prime[i]){
            continue;
        }
        prime[++prime[0]] = i;
        for(int j=i*2; j<=max_n; j=i+j){
            prime[j] = 1;
        }
    }
}

int main()
{
    init();
    for(int i=1; i<=prime[0]; i++){
        printf("%d\n", prime[i]);
    }
    return 0;
}