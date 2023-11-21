    #include <stdio.h>
int pow(int a){
    if(a==0)
        return 1;
    else if(a==1)
        return 10;
    else if(a==2)
        return 100;
    else if(a==3)
        return 1000;
    else if(a==4)
        return 10000;
    else if(a==5)
        return 100000;
}
int main(){
    int N, M=0;
    scanf("%d", &N);
    for(int i=3;i<=N;i++){
        for(int j=0;j<6;j++){
            if((i/pow(j))%10==3||(i/pow(j))%10==6||(i/pow(j))%10==9)
                M++;
        }
    }
    printf("%d", M);
}