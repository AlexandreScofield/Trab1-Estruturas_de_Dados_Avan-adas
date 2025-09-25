#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

arb* create(int x) {
	arb* new_arb = (arb*)malloc(sizeof(arb));
	new_arb->left = new_arb->right = NULL;
	new_arb->info = x;
	return new_arb;
}

arb* insert(int x, arb*root) {
	arb* aux = create(x);
	switch (x > root->info) {
	case 1:
		root->right = aux;
	case 0:
		root->left = aux;
	default:
		printf("SAME_NUMBER_ERROR:\nThis value has been used, try another one!");
}
