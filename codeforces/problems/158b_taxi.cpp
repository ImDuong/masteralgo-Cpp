#include <stdio.h>

int getMinInt(int x, int y)
{
    return y ^ ((x ^ y) & -(x < y));
}

int ceil(int a, int b)
{
    return (a + b - 1) / b;
}

int main()
{
    int n;
    scanf("%d", &n);
    int taxiCap = 4;
    int g[taxiCap + 1];
    for (int i = 1; i <= taxiCap; i++)
    {
        g[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int si = 0;
        scanf("%d", &si);
        g[si]++;
    }
    int minTaxi = g[taxiCap];
    int spareGrp2 = g[2] % 2;
    minTaxi += (g[2] - spareGrp2) / 2;

    int smallerGrp = getMinInt(g[1], g[3]);
    if (smallerGrp == g[1])
    {
        minTaxi += g[3] + spareGrp2;
    }
    else
    {
        minTaxi += g[3];
        int spareGrp1 = g[1] - g[3];
        if (spareGrp2 > 0)
        {
            // indeed spareGrp2 must be 1 here
            if (spareGrp1 <=2) {
                minTaxi += 1;
            } else {
                minTaxi += 1 + ceil(spareGrp1 - 2, taxiCap);
            }
        }
        else
        {
            minTaxi += ceil(spareGrp1, taxiCap);
        }
    }

    printf("%d", minTaxi);
    return 0;
}