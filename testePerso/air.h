#ifndef AIR_H
#define AIR_H

// Prototypes des fonctions
void afficherMenu();
int lireChoixUtilisateur();
void afficherChoixMenu(int choix);
unsigned char demanderContinuer();
void afficherListeMenusChoisis(int menusChoisis[], int compteur);
float ajouterAuTotal(int choixMenu);

#endif
