#include <bits/stdc++.h>

int main()
{
    int n, m, a, b;
    scanf("%d%d%d%d", &n, &m, &a, &b);
    if (m * a <= b)
    {
        printf("%d", n * a);
        return 0;
    }
    int spareRides = n % m;
    int spareCost = 0;
    if (spareRides * a > b) {
        spareCost = b;
    } else {
        spareCost = spareRides * a;
    }
    printf("%d", n / m * b + spareCost);
    return 0;
}