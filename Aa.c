#include <stdio.h>

void main() {
  int n, k, a;
  scanf("%d %d %d", &n, &k, &a);

  int lastPerson = a, i = 1;
  while(i<k) {
    lastPerson += 1;
    if(lastPerson > n) lastPerson = 1;
    i++;
  }
  printf("%d", lastPerson);
}
