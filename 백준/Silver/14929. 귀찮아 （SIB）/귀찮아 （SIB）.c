#include <stdio.h>

int main(void) {
    int n;
    int nums[100000] = {0};
    int sums[100000] = {0};

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", nums + i);
        if (i == 0) sums[i] = nums[i];
        else sums[i] = sums[i-1] + nums[i];
    }

    long long sum = 0;
    for(int b = 1; b < n; b++) {
        sum += (long long)nums[b] * (sums[b-1]);
    }

    printf("%lld\n", sum);
    return 0;
}
