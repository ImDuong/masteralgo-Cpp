#include <iostream>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        std::string w;
        std::cin >> w;
        if (w.length() > 10)
        {
            std::string abbrW;
            abbrW = w[0] + std::to_string(w.length() - 2) + w[w.length() - 1];
            printf("%s\n", abbrW.c_str());
            continue;
        }
        printf("%s\n", w.c_str());
    }

    return 0;
}