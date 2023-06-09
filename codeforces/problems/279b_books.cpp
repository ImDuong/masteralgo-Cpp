#include <bits/stdc++.h>

int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    int b[n];
    int bookSum[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &b[i]);
        bookSum[i] = bookSum[i - 1] + b[i];
    }
    int maxNbReadBooks = 0;
    for (int i = 1; i <= n; i++) {
        if (b[i] > t) {
            continue;
        }
        int l = i;
        int r = n;
        int mid;
        while (l < r) {
            mid = (r + l) / 2;
            mid++;
            if (bookSum[mid] - bookSum[i - 1] <= t) {
                l = mid;
            } else {
                r = mid - 1;
            }
        }
        maxNbReadBooks = std::max(maxNbReadBooks, l - i + 1);
    }

    printf("%d", maxNbReadBooks);

    return 0;
}