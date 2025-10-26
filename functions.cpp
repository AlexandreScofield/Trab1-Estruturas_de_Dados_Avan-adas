#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

pc* create(char name[], char status[] ) {
	pc* new_paci = (pc*)malloc(sizeof(pc));
	new_paci->next = NULL;
	new_paci->name = name;
	new_paci->status = status;
	return new_paci;
}
/* 
pc* insert(char name[], char status[], pc*root) {
	pc* aux = create(name, status);
	switch (status == root->status) {
	case 1:
		root->next = aux;
	case 0:
		root-> = aux;
	default:
		printf("SAME_NUMBER_ERROR:\nThis value has been used, try another one!");
	}
}
 */