#include <stdio.h>

int main() {
	char name[100];

	printf("What is your name : ");
	scanf("%s", name);	

	printf("Hello %s\n", name);
	return 0;
}
