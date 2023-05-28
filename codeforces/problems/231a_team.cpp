#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nbProbs;
    for (int i = 0; i < n; i++) {
        int isSure = 0;
        int nbVotes = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &isSure);
            nbVotes += isSure;
        }
        if (nbVotes >= 2) {
            nbProbs++;
        }
    }
    printf("%d", nbProbs);
}