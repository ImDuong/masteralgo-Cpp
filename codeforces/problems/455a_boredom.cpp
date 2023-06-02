#include <bits/stdc++.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    int maxA = 0;
    ll a[100003] = {0};
    for (int i = 0; i < n; i++) {
        int ai;
        scanf("%d", &ai);
        a[ai] += ai;
        maxA = std::max(maxA, ai);
    }
    for (int i = maxA; i >= 1; i--) {
        a[i] = std::max(a[i] + a[i + 2], a[i + 1]);
    }
    printf("%lld", a[1]);
    return 0;
}