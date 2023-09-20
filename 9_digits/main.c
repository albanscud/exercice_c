/* #include <stdio.h>
#include <math.h>

int main() {

    int gn;
    int first;
    int last;
    int l;

        printf("entrez un grand nombre");
        scanf("%d", &gn);

            l = log10(gn);   
    first = gn / pow(10, 1);
    
    last = gn % 10;
      
    printf("\nLe premier chiffre est %d", first);
    printf("\nLe dernier chiffre est %d", last);
 
    return 0;
} */

#include <stdio.h>

int main() {
  long input;

  printf("Pls gib long number");
  scanf(" %ld", &input);

  long last = input % 10;

  while (input > 10) {
    input /= 10;
  }

  printf("First: %ld\nLast: %ld\n", input, last);

  return 0;
}


