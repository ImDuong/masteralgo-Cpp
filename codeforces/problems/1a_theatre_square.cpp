#include <stdio.h>

int ceil(int a, int b) {
    return (a + b - 1) / b;
}

int main() {
    int m, n, a;
    scanf("%d%d%d", &m, &n, &a);
    printf("%llu", (long long) (ceil(m, a)) * (long long) (ceil(n, a)));
    return 0;
}