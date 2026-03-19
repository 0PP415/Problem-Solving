#include <stdio.h>
int main(void)
{
    int t,n;
    int f[41] = {0,1};
    for(int i=2;i<42;i++)
    {
        f[i] = f[i-1]+f[i-2];
    }
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        n==0?printf("1 0\n"):printf("%d %d\n",f[n-1],f[n]);
    }
    return 0;
}