#include<stdio.h>
#include<math.h>

int min(int a, int b) {
    if (a<b)
        return a;
    else
        return b;
}

void floyd(int p[10][10], int n) {
    int i, j, k;
    for (k = 1; k <= n; k++)
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++) {
                p[i][j] = min(p[i][j], (p[i][k] + p[k][j]));
                printf("%d",p[i][j]);
            }
}

void main() {
    int p[10][10], n, e, u, v, i, j,w;
    printf("%d",p[5][5]);
    printf("\n Enter the number of vertices:");
    scanf("%d", &n);
    printf("Enter the cost matrix\n");
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&p[i][j]);
        }
    }
    
    printf("\n Matrix of input data: \n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            printf("%d\t", p[i][j]);
        printf("\n");
    }
    
    floyd(p, n);
    
    printf("\n Transitive closure: \n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            printf("%d\t", p[i][j]);
        printf("\n");
    }
}