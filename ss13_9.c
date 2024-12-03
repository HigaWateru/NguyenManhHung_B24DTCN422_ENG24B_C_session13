#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a[10005][10005],m,n,d;
void nhap(){
    printf("Nhap mang 2 chieu\n");
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)scanf("%d",&a[i][j]);
}
void xuat(){
    printf("\n");
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++)printf("%2d ",a[i][j]);
        printf("\n");
    }
}
void menu3(){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if((i==1||i==m)&&(j==1||j==n))printf("%2d ",a[i][j]);
            else printf("   ");
        }
        printf("\n");
    }
}
void menu4(){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==m||j==1||j==n)printf("%2d ",a[i][j]);
            else printf("   ");
        }
        printf("\n");
    }
}
void menu5(){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if((i==j)||i+j==n+1)printf("%2d ",a[i][j]);
            else printf("   ");
        }
        printf("\n");
    }
}
int scp(int a){
    if(a<2)return 0;
    for(int i=2;i<=sqrt(a);i++)if(a%i==0)return 0;
    return 1;
}
void menu6(){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(scp(a[i][j]))printf("%2d ",a[i][j]);
            else printf("   ");
        }
        printf("\n");
    }
}
int main(){
    do{
        printf("MENU\n1.Nhap gia tri cac phan tu cua mang\n2.In gia tri cac phan tu cua mang theo ma tran\n3.In ra cac phan tu cua goc theo ma tran\n4.In ra cac phan tu nam tren duong bien theo ma tran\n5.In ra cac phan tu nam tren duong cheo chinh va duong cheo phu tren ma tran\n6.In ra cac phan tu la so nguyen to theo ma tran\n7.Thoat\nLua chon cua ban: ");
        scanf("%d",&d);
        switch(d){
            case 1:
                nhap();
                break;
            case 2:
                xuat();
                break;
            case 3:
                menu3();
                break;
            case 4:
                menu4();
                break;
            case 5:
                menu5();
                break;
            case 6:
                menu6();
                break;
            default: continue;
            }
    }while(d!=7);
}
