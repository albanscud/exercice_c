/* #include <stdio.h>

int main(){
    int prev = 0;
    int cur = 1;
    int next =1;

    int nb_tours = 0;

    
        printf("chiffre au dessus de 3");
        scanf("%d", &nb_tours);
    

    for(int i = 1; i < nb_tours; i++){
        prev = cur;
        cur = next;
        next = prev + cur;
    }

    printf("resultat final est %d", cur);

    return 0;
} */

// fibonacci

#include <stdio.h>

int main() {
  int prev = 0;
  int cur = 1;
  int next = 1;

  int nb_tours = 0;

  printf("pls give nb of iteration \n");
  scanf("%d", &nb_tours);

  for (int i = 1; i < nb_tours; ++i) {
    printf("%d\n", cur);
    prev = cur;
    cur = next;
    next = prev + cur;
  }

  printf("Final result is %d", cur);

  return 0;
}