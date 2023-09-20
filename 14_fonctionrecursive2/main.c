/*  #include <stdio.h>

int produit(int n, int x)
{
  if (n > 0)
    return produit(n - 1, x) + x;
  else
    return 0;
}
 
int main(void)
{
  int n = 8, x = 5;
 
  printf("%d * %d = %d\n", n, x, produit(n, x));
  return 0;
} 
 */

/* #include <stdio.h>

int sum(int nb_a, int nb_b){
  return sum(nb_a, nb_b);
}

int main() {

 int nb_a;

  printf("Entrez un nombre \n");
  scanf("%d", &nb_a)
  for (int i=1; i<=nb_a; i++);

  printf("sum = %d\n", sum);


return 0;

} */

#include <stdio.h>

int cumul_rec(int n){
  if (n == 1){
    return n;
  }
  return cumul_rec(n - 1) + n;
}

int main (){
  int input;

  printf("entrez un nombre");
  scanf("%d", &input);

  printf("%d\n", cumul_rec(input));
  return 0;
}