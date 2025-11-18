#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d%d", &A, &B);


    int cnt = 1;
    while (1) {
        int tmp = B%10;
        if (A == B) break;
        if (tmp == 3 || tmp == 5 || tmp == 7 || tmp == 9) {
            cnt = -1;
            break;
        }
        if (A > B) {
            cnt = -1;
            break;
        }

        if (B%2 == 0) B /= 2;
        else B /= 10;
        cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
