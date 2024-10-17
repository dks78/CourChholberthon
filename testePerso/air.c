#include <stdio.h>
#include "air.h"

// Déclaration des prix des menus
float menu_Deluxe = 17.98;
float menu_Mcbacon = 9.99;
float menu_bigmac = 19.99;
float menu_BigMonster = 8.99;
float menu_RoyalCheese = 12.99;

void afficherMenu() {
    printf("1. Menu Deluxe à %.2f euros\n", menu_Deluxe);
    printf("2. Menu Royal Cheese à %.2f euros\n", menu_RoyalCheese);
    printf("3. Menu Mc Bacon à %.2f euros\n", menu_Mcbacon);
    printf("4. Menu Big Mac à %.2f euros\n", menu_bigmac);
    printf("5. Menu BigMonster à %.2f euros\n", menu_BigMonster);
    printf("Veuillez choisir un menu (1-5):\n");
}

int lireChoixUtilisateur() {
    int choix;
    scanf("%i", &choix);
    return choix;
}

void afficherChoixMenu(int choix) {
    switch (choix) {
        case 1:
            printf("Vous avez choisi le Menu Deluxe à %.2f euros\n", menu_Deluxe);
            break;
        case 2:
            printf("Vous avez choisi le Royal Cheese à %.2f euros\n", menu_RoyalCheese);
            break;
        case 3:
            printf("Vous avez choisi le Mc Bacon à %.2f euros\n", menu_Mcbacon);
            break;
        case 4:
            printf("Vous avez choisi le Big Mac à %.2f euros\n", menu_bigmac);
            break;
        case 5:
            printf("Vous avez choisi le BigMonster à %.2f euros\n", menu_BigMonster);
            break;
    }
}

unsigned char demanderContinuer() {
    unsigned char reponse;
    printf("Voulez-vous choisir un autre menu ? (o/n): ");
    scanf(" %c", &reponse); // L'espace avant %c est important pour consommer les caractères de nouvelle ligne précédents
    return reponse;
}

void afficherListeMenusChoisis(int menusChoisis[], int compteur) {
    printf("Voici la liste de tous les menus que vous avez choisis:\n");
    for (int i = 0; i < compteur; i++) {
        afficherChoixMenu(menusChoisis[i]);
    }
}

float ajouterAuTotal(int choixMenu) {
    switch (choixMenu) {
        case 1:
            return menu_Deluxe;
        case 2:
            return menu_RoyalCheese;
        case 3:
            return menu_Mcbacon;
        case 4:
            return menu_bigmac;
        case 5:
            return menu_BigMonster;
        default:
            return 0.0; // Cas invalide, mais ne devrait pas se produire si le choix est bien contrôlé
    }
}
