#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d\n", &c);
    for(int i=0; i<c; i++)
    {
        scanf("%d %d\n", &a, &b);
        printf("%d\n", a+b);
    }
}