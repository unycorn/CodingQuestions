// Counts all triplets in an array where the 
// first two elements sum to make the third

#include <stdio.h>

int main(void) {
  int input[] = {0, 1, 1, 2, 3, 3, 3};
  int length = 7;

  int i;  
  for (i = 0; i < length - 2; i++) {
    if (input[i] + input[i+1] == input [i+2]) {
      printf("%d + %d = %d\n", input[i], input[i+1], input[i+2]);
    }
  }
  return 0;
}
