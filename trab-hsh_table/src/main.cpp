#include <stdlib.h>
#include <stdio.h>
#include "../include/hash.h"

int main(int argc, char *argv[]) {
    unsigned long long cpfs[MAX];
    int n = 0;

    if (argc < 2) {
        printf("Uso: %s arquivo_cpfs.txt\n", argv[0]);
        return 1;
    }

    // lê até 1000 CPFs (um por linha)
    FILE *f = fopen(argv[1], "r");
    if (!f) { perror("fopen"); return 1; }
    while (n < MAX) {
        unsigned long long v;
        if (fscanf(f, "%llu", &v) != 1) break;
        cpfs[n++] = v;
    }
    fclose(f);
    if (n == 0) {
        printf("Nenhuma chave lida.\n");
        return 1;
    }

    // tabela hash
    unsigned long long tab[MAX];

    // marcos: 100..1000 de 100 em 100
    int passos[] = {100,200,300,400,500,600,700,800,900,1000};
    int qpassos = sizeof(passos)/sizeof(passos[0]);

    // CSV de saída
    FILE *csv = fopen("colisoes_duplo_hash.csv", "w");
    if (!csv) { perror("csv"); return 1; }
    fprintf(csv, "chaves_inseridas,colisoes\n");

    printf("Tabela hash: enderecamento aberto (duplo hash), M=%d\n", MAX);

    for (int s = 0; s < qpassos; s++) {
        int ate = passos[s];
        if (ate > n) ate = n;

        zerar(tab);
        long long total_col = 0;

        for (int k = 0; k < ate; k++) {
            total_col += inserir(tab, cpfs[k]);
        }

        printf("%4d chaves -> %lld colisões\n", ate, total_col);
        fprintf(csv, "%d,%lld\n", ate, total_col);
    }

    fclose(csv);
    printf("CSV salvo: colisoes_duplo_hash.csv\n");
    return 0;
}