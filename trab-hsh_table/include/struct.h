#pragma once
#include "../include/hash.h"

typedef struct Hash hash;
struct Hash{
    int chave;
    hash* next;
    int* cpf;
};

