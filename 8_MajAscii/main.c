#include <stdio.h>
/* #include <ctype.h>

char CapsTiny(char n){
    if(n >= 'A' && n <= 'Z') {
        return n + 32;
    }
    else if(n >= 'a' && n <= 'z') {
        return n - 32;
    }
    else return n;
    
}

int main() {
    char letter;
    printf("Entrez une lettre: ");
    scanf(" %c", &letter); 
    if((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z')) {
        printf("Result : %c\n", CapsTiny(letter));
    }
    else /* (letter >= 'a' && letter <= 'z') printf("\n");
        
    
    return 0;
} */

// Maj






int main() {
  char c;

  while (c != 'q') {
    printf("pls gib char\n");

    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z') {
      c -= 32;
    } else if (c >= 'A' && c <= 'Z') {
      c += 32;
    }

    printf("%c\n", c);
  }

  return 0;
}