#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    int b[n];
    int minTime = 1000000000;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        if (minTime > b[i])
        {
            minTime = b[i];
        }
    }

    int maxNbReadBooks = 0;
    for (int i = 0; i < n; i++)
    {
        // prune
        if ((n - i) < maxNbReadBooks || maxNbReadBooks * minTime > t)
        {
            continue;
        }

        int readTimeLeft = t;
        int nbReadBooks = 0;
        for (int j = i; j < n; j++)
        {
            // prune
            if ((n - j) + nbReadBooks < maxNbReadBooks ||
                (maxNbReadBooks > nbReadBooks && (maxNbReadBooks - nbReadBooks) * minTime > readTimeLeft))
            {
                break;
            }

            if (b[j] > readTimeLeft)
            {
                break;
            }
            readTimeLeft -= b[j];
            nbReadBooks++;
        }
        if (nbReadBooks > maxNbReadBooks)
        {
            maxNbReadBooks = nbReadBooks;
        }
    }
    printf("%d", maxNbReadBooks);
}