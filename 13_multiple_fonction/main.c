// recursive

#include <stdio.h>

int sum (int, int);


int main(void){

    int a = 20;
    int b = 20;

    int sum(int a, int b) {
        return a + b;
    }

    printf("%d\n", sum (a, b));

    return 0;
}
---------------------------------------
#include <stdio.h>
// sum multiple function
int is_multiple(int a, int b) { return a % b == 0; }

int main() {
  int a = 10;
  int b = 2;

  if (is_multiple(a, b)) {
    printf("%d est un multuple de %d.\n", a, b);
  } else {
    printf("%d n'est pas un multuple de %d.\n", a, b);
  }

  return 0;
}
-------------------------------------------
#include <stdio.h>
// meme exo qu'avant mais en faisant une boucle

int is_multiple(int a, int b) {

  int cache = b;
  while (cache < a) {
    cache += b;
  }
  return cache == a;
}

int main() {
  int a = 10;
  int b = 2;

  if (is_multiple(a, b)) {
    printf("%d est un multuple de %d.\n", a, b);
  } else {
    printf("%d n'est pas un multuple de %d.\n", a, b);
  }

  return 0;
}