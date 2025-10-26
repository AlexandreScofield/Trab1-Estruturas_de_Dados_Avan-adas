#include <stdlib.h>
#include <stdio.h>

#define MAX 1201
#define TAM 1000
#define EMPTY 0ULL

unsigned int h1(unsigned long long x) {
    return (unsigned int)(x % MAX);
}

unsigned int h2(unsigned long long x) {
    return (unsigned int)(1 + ((x * 2654435761u) % (MAX - 1)));
}

void zerar(unsigned long long vet[]) {
    for (int i = 0; i < MAX; i++)
        vet[i] = EMPTY;
}

int inserir(unsigned long long tab[], unsigned long long chave) {
    unsigned int i1 = h1(chave);
    unsigned int step = h2(chave);
    unsigned int j = i1;
    int col = 0;

    for (int probe = 0; probe < MAX; probe++) {
        if (tab[j] == EMPTY) {
            tab[j] = chave;
            return col;
        } else if (tab[j] == chave) {
            return col;
        } else {
            col++;
            j += step;
            if (j >= MAX) j -= MAX;
        }
    }
    return col;
}

