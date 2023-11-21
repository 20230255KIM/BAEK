#include <stdio.h>
#pragma warning (disable:4996)
int main() {
    int N, M, count = 0;
    char S[51][51] = { '0' };  
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%s", &S[i]);
    }
    char A[51][51];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            A[i][j] = S[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (S[i][j] == 'X') {
                for (int k = 0; k < N; k++) {
                    if (S[k][j] == '.')
                        S[k][j] = '0';
                }
                for (int l = 0; l < M; l++) {
                    if (A[i][l] == '.')
                        A[i][l] = '0';
                }
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ((S[i][j] == '.')&&(A[i][j] == '.')) {
                S[i][j] = 'X';
                A[i][j] = 'X';
                count++;
                for (int k = 0; k < N; k++) {
                    if (S[k][j] == '.')
                        S[k][j] = '0';
                }
                for (int l = 0; l < M; l++) {
                    if (A[i][l] == '.')
                        A[i][l] = '0';
                }
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ((S[i][j] == '.') || (A[i][j] == '.')) {
                S[i][j] = 'X';
                A[i][j] = 'X';
                count++;
                for (int k = 0; k < N; k++) {
                    if (S[k][j] == '.')
                        S[k][j] = '0';
                }
                for (int l = 0; l < M; l++) {
                    if (A[i][l] == '.')
                        A[i][l] = '0';
                }
            }
        }
    }

    printf("%d", count);
}