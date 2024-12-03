#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
long long ucln(long long a, long long b){
    if(a==0||b==0)return a+b;
    for(int i=fmin(a,b);i>=1;i--)if(a%i==0&&b%i==0)return i;
    return 1;
}
long long a,b,c;
int main(){
    scanf("%lld%lld%lld",&a,&b,&c);
    printf("%lld",ucln(a,ucln(b,c)));
}
