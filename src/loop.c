#include <stdio.h>

int main() {
	int a = 3; 
	for (int i = 0; i < 10; i++) {
		a += a * i;	
	}
	return 0;
}
