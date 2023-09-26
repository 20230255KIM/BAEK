#include <stdio.h>
int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if((a-b)<0)
    {
        a *= -1;
        b *= -1;
    }
    printf("%lld", a-b);
}