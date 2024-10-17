#include <stdio.h>



int main(void) { 
    // int carre = 12; // nombre entier
    // float nombre = 1245.16; //nombre a virgule 


    // carre = 13; //ici J'ai modifier la valeur de la variable 

    // return 0;



// affichier les varible , le 
//%d : = nombre enteir (int)
// %f = nombre a virgule (float)
// %c = charactere
// %s = chaine de caractere
// %p = adresse memoire
// %x = nombre en hexadecimale
// %o = nombre en octal
// %u = nombre entier sans signe
// %ld = nombre entier long (long int)
// %lld = nombre entier long long (long long int)
// %Lf = nombre a virgule long (long double)
 

 // exemple 
 float duexiemm_nobmre = 458.25;
 int nombre = 154; 
 printf("le nombre est : %d \n", nombre ); // permet d'afficher 1 variaablbe  
 printf("le nombre est : %d  ou %.2f \n", nombre , duexiemm_nobmre); // affiche la deuxiemme variable (le .2 avant le f permet de afficher seulement 
 2 chiffre apres la virgule)

const float PI = 3.14 ; // CONST : dit que la valeur de PI ne peux pas etre modifier 
printf("le nombre de PI est : %.2f \n", PI);
PI = 5.13 ;
printf("le nombre de PI est : %.2f \n", PI);

    register int nombre = 5 ; /*(REGISTER) est une instruction de stockage pour les variables. 
    Il est utilisé pour demander au compilateur de stocker une variable dans un registre de la CPU, 
    plutôt que dans la mémoire principale (RAM). Les registres sont des emplacements de stockage extrêmement rapides,
     situés directement sur le processeur, ce qui permet d'accélérer les opérations sur ces variables. */
    volatile int Anombre = 10 ; /*Permet que l variable ne s'enregistre pas dans le register */

return 0;

}