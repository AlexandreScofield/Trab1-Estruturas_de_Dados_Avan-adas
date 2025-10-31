#include <stdlib.h>
#include <stdio.h>
#include "../include/hash.h"
#include "../include/constants.h"
#include "../include/struct.h"


int main() {
    int n = 0;

    FILE *f = fopen("../data/mil_cpfs.txt", "r");
    if (!f) {
        printf("Erro ao abrir arquivo de CPFs.\n");
        return 1;
    }

    while (n < TAM && fscanf(f, "%llu", &vetor_dados[n]) == 1)
        n++;
    fclose(f);

    if (n == 0) {
        printf("Nenhum CPF lido.\n");
        return 1;
    }

    hash folha;

    for (int i = 0; i < TAM; i++){
        insert(&folha, hash_table);
    }


}