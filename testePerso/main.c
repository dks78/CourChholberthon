#include <stdio.h>
#include "air.h"


#include <stdio.h>

// int main() {
//     int choixMenu;
//     unsigned char continuer;
//     int menusChoisis[100]; // Tableau pour stocker les choix de l'utilisateur
//     int compteur = 0; // Compteur pour suivre le nombre de menus choisis

//     float menu_Deluxe = 17.98;
//     float menu_Mcbacon = 9.99;
//     float menu_bigmac = 19.99;
//     float menu_BigMonster = 8.99;
//     float menu_RoyalCheese = 12.99;
   
//     float totalPrix = 0.0; // Variable pour stocker le total du prix

//     do {
//         printf("1. menu Deluxe à %.2f\n", menu_Deluxe);
//         printf("2. menu Royal Cheese à %.2f\n", menu_RoyalCheese);
//         printf("3. menu Mc Bacon à %.2f\n", menu_Mcbacon);
//         printf("4. menu Big Mac à %.2f\n", menu_bigmac);
//         printf("5. menu BigMonster à %.2f\n", menu_BigMonster);
//         printf("Veuillez choisir un menu (1-5):\n");

//         scanf("%i", &choixMenu);

//         switch (choixMenu) {
//             case 1:
//                 printf("Vous avez choisi Mc Deluxe à %.2f\n", menu_Deluxe);
//                 totalPrix += menu_Deluxe; // Ajouter le prix au total
//                 break;
//             case 2:
//                 printf("Vous avez choisi Royal Cheese à %.2f\n", menu_RoyalCheese);
//                 totalPrix += menu_RoyalCheese; // Ajouter le prix au total
//                 break;
//             case 3:
//                 printf("Vous avez choisi Mc Bacon à %.2f\n", menu_Mcbacon);
//                 totalPrix += menu_Mcbacon; // Ajouter le prix au total
//                 break;
//             case 4:
//                 printf("Vous avez choisi Big Mac à %.2f\n", menu_bigmac);
//                 totalPrix += menu_bigmac; // Ajouter le prix au total
//                 break;
//             case 5:
//                 printf("Vous avez choisi le menu BigMonster à %.2f\n", menu_BigMonster);
//                 totalPrix += menu_BigMonster; // Ajouter le prix au total
//                 break;
//             default:
//                 printf("Ce numéro de menu n'est pas valide, veuillez choisir entre les 5 menus disponibles\n");
//                 continue; // Redemander un choix valide si l'entrée est invalide
//         }

//         menusChoisis[compteur++] = choixMenu; // Stocker le choix dans le tableau

//         printf("Voulez-vous choisir un autre menu? (o/n):\n");
//         scanf(" %c", &continuer); // Notez l'espace avant %c pour ignorer les caractères de nouvelle ligne précédents
//     } while (continuer == 'o' || continuer == 'O');

//     // Afficher la liste de tous les menus choisis et le total
//     printf("Voici la liste de tous les menus que vous avez choisis:\n");
//     for (int i = 0; i < compteur; i++) {
//         switch (menusChoisis[i]) {
//             case 1:
//                 printf("Mc Deluxe à %.2f\n", menu_Deluxe);
//                 break;
//             case 2:
//                 printf("Royal Cheese à %.2f\n", menu_RoyalCheese);
//                 break;
//             case 3:
//                 printf("Mc Bacon à %.2f\n", menu_Mcbacon);
//                 break;
//             case 4:
//                 printf("Big Mac à %.2f\n", menu_bigmac);
//                 break;
//             case 5:
//                 printf("BigMonster à %.2f\n", menu_BigMonster);
//                 break;
//         }
//     }

//     // Afficher le total du prix
//     printf("Le total de votre commande est de : %.2f euros\n", totalPrix);

//     return 0;
// }

#include <stdio.h>
#include "air.h"

int main() {
    int choixMenu;
    unsigned char continuer;
    int menusChoisis[100]; // Tableau pour stocker les choix de l'utilisateur
    int compteur = 0; // Compteur pour suivre le nombre de menus choisis
    float totalPrix = 0.0; // Variable pour stocker le total du prix

    do {
        afficherMenu();
        choixMenu = lireChoixUtilisateur();

        if (choixMenu < 1 || choixMenu > 5) {
            printf("Ce numéro de menu n'est pas valide, veuillez choisir entre les 5 menus disponibles\n");
            continue;
        }

        totalPrix += ajouterAuTotal(choixMenu); // Ajout du prix au total
        afficherChoixMenu(choixMenu); // Affiche le menu choisi
        menusChoisis[compteur++] = choixMenu; // Stocker le choix dans le tableau

        continuer = demanderContinuer(); // Demande à l'utilisateur s'il veut continuer
    } while (continuer == 'o' || continuer == 'O');

    afficherListeMenusChoisis(menusChoisis, compteur); // Affiche la liste des menus choisis
    printf("Le total de votre commande est de : %.2f euros\n", totalPrix); // Affiche le total

    return 0;
}
