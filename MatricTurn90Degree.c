//
// Created by Xin Sun on 2020-12-17.
//
#include <stdio.h>

int main() {
    int matrix[3][3];
    int i;
    int j;
    for(i=0; i<3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int tmp[3][3];
    int k = 2;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
            tmp[j][k] = matrix[i][j];
        }
        k--;
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
            if(j != 2){
                printf("%d ", tmp[i][j]);
            }else{
                printf("%d", tmp[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
