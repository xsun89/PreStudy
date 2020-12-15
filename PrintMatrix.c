#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;

    scanf("%d%d", &m, &n);
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int ret[100*100] = {0};
    int r1 = 0;
    int c1 = 0;
    int r2 = m -1;
    int c2 = n -1;

    int k = 0;
    while (r1 <= r2 && c1<= c2) {
        for (int c = c1; c <= c2; c++) {
            ret[k++] = matrix[r1][c];
        }

        for (int r = r1 + 1; r <= r2; r++) {
            ret[k++] = matrix[r][c2];
        }
        if(r1 < r2 && c1 < c2){
            for (int c = c2-1; c >= c1; c--) {
                ret[k++] = matrix[r2][c];
            }

            for (int r = r2-1; r > r1; r--) {
                ret[k++] = matrix[r][c1];
            }
        }

        r1++;
        r2--;
        c1++;
        c2--;

    }
    for(k=0; k<m*n; k++){
        if(k == m*n -1){
            printf("%d", ret[k]);
        }else{
            printf("%d ", ret[k]);
        }
    }
    return 0;
}
//00 01 02 12 11 10