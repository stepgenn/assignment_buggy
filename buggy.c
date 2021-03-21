#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char password[10] = "admin1234";

char* getString(char* s) {
	char* local = "ab";
	switch(s[0]){
		case 'a':
			local[1] == s[0]; 
		case 'b':
			local[0] == s[1]; 
	}
	return local; 
}

int main(int argc, char* argv[]) {
	char* input = malloc(8);
	char* heap = malloc(8);
	unsigned char stack[4];
	strcpy(input, argv[1]);

	if (input = password) {
		printf("Admin\n");
	}
	int p_len;
	float pi = 3; 
	
	if (p_len < getString(heap)) {
		p_len = pi;
		if (p_len == 3) {
			printf("%ls \n");
		}
	}

	printf("Write password: ");
	scanf("%s", heap);
	printf("\nLength of password:", heap[0]);
	scanf("%d", p_len);
	
	strncpy(stack, heap, 8);
	printf("stack: %s\n", stack);
	unsigned int len = sizeof(stack);
	int i;
	for (i = 1; len - i > 0; i++) {
		printf("%c\n", stack[len - i++]);
	}
	free(heap);
	
	for (i = 0 ; i < p_len; i++){
		printf("%x", heap[i]);
	}
	free(heap);
}