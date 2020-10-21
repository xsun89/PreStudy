//
// Created by Xin Sun on 2020-10-20.
//
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=i; j<=n;j++){
            if(j==n){
                printf("%d*%d=%d", i, j, i*j);
            }else{
                printf("%d*%d=%d\t", i, j, i*j);
            }
        }
        printf("\n");
    }

    return 0;
}
