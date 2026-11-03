#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nbr1;
    int nbr2;
    char operateur;
    printf("Bonjour ! Bienvenue dans la calculatrice.\n");
    printf("Veuillez choisir un opérateur (+, -, *, /, %%):\n");
    scanf("%c", &operateur);
    printf("Veuillez entrer le premier nombre:\n");
    scanf("%d", &nbr1);
    printf("Veuillez entrer le deuxième nombre:\n");
    scanf("%d", &nbr2);
    if (operateur == '+') {
        printf("addition\n");
    } else if (operateur == '-') {
        printf("soustraction\n");
    } else if (operateur == '*') {
        printf("multiplication\n");
    } else if (operateur == '/') {
        printf("division\n");
    } else if (operateur == '%') {
        printf("modulo\n");
    } else {
        printf("Opérateur invalide.\n");
    }
    exit(0);
}