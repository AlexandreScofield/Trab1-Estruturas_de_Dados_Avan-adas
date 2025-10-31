#include <stdlib.h>
#include <stdio.h>
#include "../include/constants.h"
#include "../include/struct.h"

unsigned int h1 (hash *folha){
    return ((unsigned int)folha->cpf) % MAX;
}

unsigned int h2(hash* folha) {
    return ((unsigned int)folha->cpf * 2654435761u) % MAX;
}

void insert(hash* folha, hash hash_table[]){
    unsigned int index = h1(folha);
    int colisoes = 0;

    while (hash_table[index].next != NULL){
        colisoes++;
        index += h2(folha);
    };

    folha->chave = index;


}

