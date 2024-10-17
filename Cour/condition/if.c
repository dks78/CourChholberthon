#include <stdio.h>

int main (void)
{ 

/*
 Comparateur de comparaison 

    == : egale a 
    != : différent de 
    < : plus petit que 
    <= : plus petit ou égale a 
    >= : plus grand ou égal a 
    

    && : ET logique (vrai si les deux conditions sont vraies).
        Exemple : if (a > 0 && b < 10) { ... }
    || : OU logique (vrai si au moins une des deux conditions est vraie).
        Exemple : if (a == 0 || b == 1) { ... }
    ! : NON logique (inversion de la valeur booléenne, vrai devient faux et vice-versa).
        Exemple : if (!a) { ... } (vrai si a est faux, c'est-à-dire égal à 0)
    3. Opérateurs de bit à bit (utilisés parfois dans des conditions)
        Ces opérateurs manipulent les bits individuellement, mais peuvent aussi être utilisés dans des conditions pour tester certaines propriétés des bits.

    & : ET bit à bit (vérifie si les bits correspondants sont tous les deux 1).
        Exemple : if (a & 1) { ... } (vérifie si le bit de poids faible de a est 1, c'est-à-dire si a est impair)
    | : OU bit à bit (vérifie si au moins un des bits correspondants est 1).
    Exemple : if (a | b) { ... }
    ^ : OU exclusif (XOR) bit à bit (vérifie si les bits correspondants sont différents).
    Exemple : if (a ^ b) { ... } (vrai si a et b sont différents au niveau binaire)
    
*/
    int nombre = 0;

    // if(nombre == 0 )
    // { 
    //     printf("Nombre vaux bien 0.");
    // }
    // return 0 ; 

    // if ( nombre == 0) { 
    //     printf("Nombre est bien 0.");

    // } else if (nombre  > 45) { 
    //     printf("nombre est kxoqf");
    // } else {
    //     printf("Nombre est bien 0.");
    // }


    int jeu_demarre = 0; // ici 1 = tree et 0 = false , 0 et 1 est un boolans 
    
    if(jeu_demarre) { // ici j'ai mis seulement le nom de la variable par ce que je veux juste tester le nom de la variable

        printf("Le jeu a bien démarré.");
    } else {
        printf("le je ne marche pas ");
    }
     return 0; 

        int jeu_demarres = 0;

         if(!jeu_demarres) { // ici je dit esque jeu demarre est egale a 0 , donc oui 
    
        printf("Le jeu a bien démarré.");
    } else {
        printf("le je ne marche pas ");
    }
     return 0; 


    int age = 75 ;


    if ( age >= 1 && age =< 75 ) { // si je fait un && il faut absolument que toute les condition ratacher a des &&  sois valide , pareil pour || 

    printf("bldslds;cq") ;
    }
    



}