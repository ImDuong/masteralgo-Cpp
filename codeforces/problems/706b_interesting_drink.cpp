#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    // sort x
    std::sort(x, x + n);

    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int m;
        scanf("%d", &m);

        // binary search for the below closest price to m
        int closestIdx = std::upper_bound(x, x + n, m) - x;
        printf("%d\n", closestIdx);
        
    }

    return 0;
}