#include <stdio.h>

int main () { 
    /*
    
    maVariable : contenue de la variable ( ex : maviaraible = 15 )
    &maVariable : adresse ou est stockée la variable 
    
    
    SCANF = est une fonction a Utilisé avec prudence , elle n'est pas forcément sécurise , mes ne pose aucun probléme
    pour l'utilisation d'un débutant 
    */
    
   int majeur = 18 ;

    int ageUilisateur = ' ';

    printf("quel est votre age ?  : "); 
    scanf("%d", &ageUilisateur);

    printf("mon age est : %d " , ageUilisateur);

    if( majeur > ageUilisateur) { 
        printf("vous n'etes pas majeur \n");
    } else if ( majeur < ageUilisateur) { 
        printf("vous êtes majeur \n");
    }
    return 0;
}