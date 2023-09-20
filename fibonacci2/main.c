#include <stdio.h>

int val_suite (int n){
    if (n == 0 || n == 1)
        return n;
    else
        return val_suite(n-1) + val_suite(n-2);
}

int main() {
  int nbr = 0;
  int i = 0;
  int j;

    printf("Entrez un nombre");
    scanf("%d", &nbr);

    printf("la valeur de la suite de fibonacci depuis votre nombre est de : %d\n", val_suite(nbr));

    for (j = 1; j <= nbr; j++)
    {
        printf("%d\n", val_suite(i));
        i++;
    }
  return 0;
}
