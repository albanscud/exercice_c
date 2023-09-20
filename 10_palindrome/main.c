#include <stdio.h>

int main() {
    int nb, tmp, nbInverse = 0;

    printf("entrez un nombre");
    scanf("%d", &nb);
 
tmp = nb;

while (tmp != 0)
{
    nbInverse = nbInverse * 10;
    nbInverse = nbInverse + tmp%10;
    tmp = tmp/10;

}

if (nb == nbInverse)
    printf("%d est un nombre palindrome \n", nb);

    else
        printf("%d n'est pas un nombre palindrome \n", nb);

return 0;
}