#include <stdio.h>
#include <stdlib.h>
int compare(const void *a , const void *b) 
{ 
     if( *(int*)a < *(int*)b )

        return 1;

    else if( *(int*)a > *(int*)b )

        return -1;

    else

        return 0;
} 
int main(){
    int a[1000001];
    int b;
    scanf("%d", &b);
    for(int i=0;i<b;i++){
        scanf("%d", &a[i]);
    }
    qsort(a, b, sizeof(int), compare);
    for(int i=0;i<b;i++){
        printf("%d\n", a[i]);
    }
}