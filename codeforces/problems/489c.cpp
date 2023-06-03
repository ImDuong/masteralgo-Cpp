#include <bits/stdc++.h>

int main()
{
    int m, s;
    scanf("%d%d", &m, &s);
    if (m == 1 && s <= 9)
    {
        printf("%d %d", s, s);
        return 0;
    }
    if (!(m * 9 >= s && 1 <= s))
    {
        printf("-1 -1");
        return 0;
    }
    int nbNines = s / 9;

    // print min

    // edge case: s % 9 == 0
    if (s % 9 == 0)
    {
        if (m - s / 9 > 0)
        {
            printf("1");
            for (int i = 1; i <= m - s / 9 - 1; i++)
            {
                printf("0");
            }
            printf("8");
            for (int i = 1; i <= s / 9 - 1; i++)
            {
                printf("9");
            }
        } else {
            for (int i = 1; i <= s / 9; i++)
            {
                printf("9");
            }
        }
    }
    else
    {
        if (m - nbNines == 1)
        {
            printf("%d", s - 9 * nbNines);
        }
        else if (m - nbNines >= 2)
        {
            printf("1");
            for (int i = 1; i <= m - nbNines - 2; i++)
            {
                printf("0");
            }
            printf("%d", s - 9 * nbNines - 1);
        }

        for (int i = 1; i <= nbNines; i++)
        {
            printf("9");
        }
    }

    // print separator
    printf(" ");

    // print max
    for (int i = 1; i <= nbNines; i++)
    {
        printf("9");
    }
    if (m - nbNines > 0)
    {
        printf("%d", s % 9);
        for (int i = 1; i <= m - nbNines - 1; i++)
        {
            printf("0");
        }
    }
    return 0;
}