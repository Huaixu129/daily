#include <stdio.h>

int main() {
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF) {
        double mates[n][m];
        int i, j;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%lf", &mates[i][j]);
            }
        }
        double sum[n];
        double Sum[m];

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                sum[i] += mates[i][j];
            }
            printf("%.2f ", sum[i] / (double)m); // 每名同学平均成绩
        }
        printf("\n");

        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                Sum[i] += mates[j][i];
            }
            printf("%.2f ", Sum[i] / (double)n); // 每科平均成绩
        }
        printf("\n");

        int GOOD = 0;
        int top = 0;
        for (i = 0; i < n; i++) {
            GOOD = 0; 
            for (j = 0; j < m; j++) {
                if (mates[i][j] >= Sum[j] / (double)n)
                    GOOD++;
            }
            if (GOOD == m)
                top++;
        }
        printf("%d", top);
    }
    return 0;
}
