#include <stdio.h>

int main(void)
{
    double a,b;
    double tmp;
    scanf("%lf %lf",&a,&b);
    tmp = a/b;
    printf("%.9lf",tmp);
    return 0;
}