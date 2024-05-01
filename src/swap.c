#include <stdio.h>

void swap(int *a, int *b);

int main() {
  int a,b;

  printf("Enter the pair of the integers (a, b) : ");
  
  scanf("%d %d", &a, &b);
  printf("Before Swap\n");
  printf("(a, b) : (%d, %d)\n", a, b);

  swap(&a, &b);

  printf("After Swap\n");
  printf("(a, b) : (%d, %d)\n", a, b);

  return 0;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

