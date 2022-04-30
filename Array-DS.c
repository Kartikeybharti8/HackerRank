#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i; i<N; i++){
        scanf("%d",&a[i]);
    }
    int t;
    for(int i = 0; i<N/2; i++){
        t = a[i];
        a[i] = a[N-i-1];
        a[N-i-1] = t;
    }
    for(int i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
}
