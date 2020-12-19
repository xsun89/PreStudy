//
// Created by Xin Sun on 2020-12-17.
//
#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;

    scanf("%d %d", &m, &n);
    int i, j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int op;
    scanf("%d", &op);

    if(op == 0){
        for(i=m-1; i>=0; i--){
            for(j=0; j<n; j++){
                if(j != n-1)
                    printf("%d ", matrix[i][j]);
                else{
                    printf("%d", matrix[i][j]);
                }
            }
            printf("\n");
        }
    }else if(op ==1){
        for(i=0; i<m; i++){
            for(j=n-1; j>=0; j--){
                if(j != 0)
                    printf("%d ", matrix[i][j]);
                else{
                    printf("%d", matrix[i][j]);
                }
            }
            printf("\n");
        }
    }


    return 0;
}