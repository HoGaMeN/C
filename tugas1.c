#include <stdio.h>

int main() {
  int i = 0;

  while (i < 10) {
    if (i == 9) {
      continue;
    }
    printf("%d\n", i);
    i++;
  }

  return 0;
}
