typedef struct Paci pc;
struct Paci {
	char* name;
	char* status;
	pc* next;
};

pc* create(char name[], char status[] );

pc* insert(char* name, char* status);