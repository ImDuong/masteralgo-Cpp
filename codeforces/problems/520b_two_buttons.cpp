#include <bits/stdc++.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (n > m)
    {
        printf("%d", n - m);
        return 0;
    }

    int nbClicks = 0;
    while (n != m)
    {
        if (m > n)
        {
            if (m % 2 == 0)
            {
                m /= 2;
            }
            else
            {
                m++;
            }
        }
        else
        {
            m++;
        }
        nbClicks++;
    }

    printf("%d", nbClicks);
    return 0;
}