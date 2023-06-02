#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);
    int l;
    scanf("%d", &l);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (n == 1) {
        printf("%f", (double)std::max(a[0], l - a[0]));    
        return 0;
    }

    std::sort(a, a + n);

    int headDist = a[0];
    int tailDist = l - a[n - 1];
    double maxDist = std::max(headDist, tailDist) * 2;
    
    for (int i = 0; i < n - 1; i++) {
        maxDist = std::max(maxDist, (double)(a[i + 1] - a[i]));
    }
    printf("%f", maxDist / 2);
    return 0;
}