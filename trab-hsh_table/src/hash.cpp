#include <stdlib.h>
#include <stdio.h>
#include "../include/constants.h"
#include "../include/struct.h"

//Tabela hash
htable hash_table [MAX];
hash dados [TAM];

unsigned int h1 (hash *folha){
    return ((unsigned int)folha->cpf) % MAX;
}

unsigned int h2(hash* folha) {
    return ((unsigned int)folha->cpf * 2654435761u) % MAX;
}

void insert(hash* folha, htable* hash_table){
    unsigned int index = h1(folha);
    if (hash_table)
}

