#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int m,n,a[10005][10005];
void nhap(int m, int n){
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
}
int main() {
    scanf("%d%d",&m,&n);
    nhap(m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)printf("%d ",a[i][j]);
        printf("\n");
    }
}
