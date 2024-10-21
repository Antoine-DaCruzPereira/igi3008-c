#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[100];
    int p = 0;
    printf("Entrez une chaine de caractères : %s\n", s);
    fgets(s, 100, stdin);
    int i = atoi(s);
    double f = atod(s);
    printf("La chaine de caractères récupérée dans s : %s\n", s);
    printf("composée de %ld caractères lus au clavier\n", strlen(s));
    while(s[p] != '\0') {
        printf("Caractère %2d : %c\n", p, s[p]);
        p++;
    printf("après conversion : %d",i);
    printf("et multiplication par 2 : %d",2*i);
    }
}

