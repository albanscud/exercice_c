// Sum function
#include <stdio.h>
// Ici on définit ce qu'il va se passer si on appelle la fonction appelée 'sum' et qui prend en parametre deux 'int'.
// Ce n'est qu'une déclaration et rien ne se passera si on ne l'appelle pas.
int sum(int a, int b) {
  int response = a + b;

  return response;
}

int main() {
  // Description :
  // Je dois mettre dans 's' la valeur de sum(10 + 4, 4)
  // Je dois donc executer 'sum' mais pour cela je dois savoir combien font 10+4
  // 1: Le processeur calcule 10+4
  // 2: Le processeur calcule le resultat de sum(14, 4)
  // 3: On stocke le résultat de sum(14, 4) dans 's'
  // 4: on passe à la suite de l'execution
  int s = sum(10 + 4, 4);

  printf("%d\n", s);
  return 0;
}


