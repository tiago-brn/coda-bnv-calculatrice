#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nombre_1;
    int nombre_2;
    char operateur;
    printf("Bonjour ! Bienvenue dans la calculatrice.\n");
    printf("Veuillez choisir un opérateur (+, -, *, /, %%):\n");
    scanf("%c", &operateur);
    printf("Veuillez entrer le premier nombre:\n");
    scanf("%d", &nombre_1);
    printf("Veuillez entrer le deuxième nombre:\n");
    scanf("%d", &nombre_2);
    if (operateur == '+') {
        printf("addition\n");
        int resultat = nombre_1 + nombre_2;
        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    } else if (operateur == '-') {
        printf("soustraction\n");
        int resultat = nombre_1 - nombre_2;
        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    } else if (operateur == '*') {
        printf("multiplication\n");
        int resultat = nombre_1 * nombre_2;
        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    } else if (operateur == '/') {
        printf("division\n");
        double resultat = nombre_1 / nombre_2;
        if (nombre_2 == 0) {
            printf("Erreur : division par zéro impossible.\n");
        } else {
            printf("%d %c %d = %.2f\n", nombre_1, operateur, nombre_2, resultat);;
        }
    } else if (operateur == '%') {
        printf("modulo\n");
        int resultat = nombre_1 % nombre_2;
        if (nombre_2 == 0) {
            printf("Erreur : modulo par zéro impossible.\n");
        } else {
            printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
        }
    } else {
        printf("Opérateur invalide.\n");
    }
    exit(0);
}