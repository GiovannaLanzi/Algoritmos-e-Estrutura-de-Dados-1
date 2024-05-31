#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int vet[30] = {1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 2, 3};
    int freq[30] = {0}; 
	int i, maisfreq, maiorfreq;
    
    for (i = 0; i < 30; i++) {
        freq[vet[i]]++;
    }

    for (i = 0; i < 30; i++) {
        if (freq[i] > maiorfreq) {
            maiorfreq = freq[i];
            maisfreq = i;
        }
    }

    printf("O elemento mais frequente é o: %d\n", maisfreq);

    return 0;
}

