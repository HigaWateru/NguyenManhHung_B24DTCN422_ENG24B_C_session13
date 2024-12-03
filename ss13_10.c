#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int a[100005],n,d,gt,vt;
char ch;
int cmp1(const void *ptr1, const void *ptr2){
    int *x=(int*)ptr1;
    int *y=(int*)ptr2;
    if(*x<*y)return -1;
    else return 1;
}
int cmp2(const void *ptr1, const void *ptr2){
    int *x=(int*)ptr1;
    int *y=(int*)ptr2;
    if(*x>*y)return -1;
    else return 1;
}
void nhap(){
    printf("Nhap so phan tu va gia tri cac phan tu:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
}
void xuat(){
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    printf("\n");
}
void insertElement(int a[], int *n, int gt, int vt){
    for(int i=*n;i>=vt;i--)a[i]=a[i-1];
    a[vt]=gt;
    ++(*n);
}
void fixEl(int a[],int gt, int vt){
    a[vt]=gt;
}
void deleEl(int a[], int *n, int vt){
    for(int i=vt;i<(*n)-1;i++)a[i]=a[i+1];
    --(*n);
}
void sort(int a[], int n, char ch){
    if((char)ch=='a')qsort(a,n,sizeof(int),cmp1);
    else qsort(a,n,sizeof(int),cmp2);
}
void search(int a[], int n, int gt){
    printf("Vi tri phan tu trong mang: ");
    for(int i=0;i<n;i++)if(a[i]==gt)printf("%d ",i);
    printf("\n");
}
int main(){
    do{
        printf("MENU\n1.Nhap so phan tu can nhap va gia tri cac phan tu\n2.In ra gia tri cac phan tu dang quan ly\n3.Them mot phan tu vao vi tri chi dinh\n4.Sua mot phan tu o vi tri chi dinh\n5.Xoa mot phan tu o vi tri chi dinh\n6.Sap xep cac phan tu\n7.Tim kiem phan tu nhap vao\n8.Thoat\nLua chon cua ban: ");
        scanf("%d",&d);
        switch(d){
            case 1:
                nhap();
                break;
            case 2:
                xuat();
                break;
            case 3:
                printf("Nhap gia tri can chen: ");
                scanf("%d",&gt);
                printf("Nhap vi tri can chen: ");
                scanf("%d",&vt);
                insertElement(a,&n,gt,vt);
                break;
            case 4:
                printf("Nhap gia tri can sua: ");
                scanf("%d",&gt);
                printf("Nhap vi tri can sua: ");
                scanf("%d",&vt);
                fixEl(a,gt,vt);
                break;
            case 5:
                printf("Nhap vi tri can xoa: ");
                scanf("%d",&vt);
                deleEl(a,&n,vt);
                break;
            case 6:
                do{
                    printf("a. Giam dan\nb.Tang dan\nLua chon cua ban: ");
                    scanf("%s",&ch);
                }while(ch!='a'&&ch!='b');
                sort(a,n,ch);
                break;
            case 7:
                printf("Nhap gia tri can tim: ");
                scanf("%d",&gt);
                search(a,n,gt);
                break;
            default: continue;
        }
    }while(d!=8);
}
