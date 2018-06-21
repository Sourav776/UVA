#include<stdio.h>
#define N 30002

static long long a[N];
static const unsigned coins[5] = {1, 5, 10, 25, 50};

int main(){
    register unsigned int i, j;
    unsigned n;
    a[0] = 1;
    for(i = 0; i < 5; ++i){
        for(j = coins[i]; j < N; ++j)
            a[j] += a[j - coins[i]];
    }

    while(scanf("%lld", &n) == 1){
        if(a[n] == 1)
            printf("There is only %lld way to produce %u cents change.\n", a[n], n);
        else
            printf("There are %lld ways to produce %u cents change.\n", a[n], n);
    }
    return 0;
}
