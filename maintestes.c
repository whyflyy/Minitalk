#include "libft/libft.h"

//--------------------------------DO CHATGPT para testar passar para bits--------------------------------

#include <stdio.h>
#include <string.h>

// // Function to print binary representation of an integer
void printBinary(unsigned char num) {
	for (int i = 7; i >= 0; i--) {
		printf("%d", (num >> i) & 1);
	}
}

// int main() {
//     char str[] = "Hello";
//     int len = strlen(str);

//     printf("String: %s\n", str);
//     printf("Binary representation:\n");

//     for (int i = 0; i < len; i++) {
//         printf("Character: %c  Binary: ", str[i]);
//         printBinary(str[i]);
//         printf("\n");
//     }

//     return 0;
// }


int main(void)
{
	char c = 'c';

	printf("Character: %c  Binary: ", c);
	printBinary(c);
	printf("\n");
	printf("%d", (c >> 1) & 1);
}