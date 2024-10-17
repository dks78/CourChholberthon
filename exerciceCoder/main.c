

#include <stdio.h>
                                     // exerccice 1 // 
// int main(void) {
//     int nb1 = 0;  
//     int nb2 = 0;  

//     printf("Choisis tes nombres : ");
//     scanf("%d %d", &nb1, &nb2); 

//     printf("Tu as choisi : %d et %d\n", nb1, nb2);

//     const int  nombreTotale = nb1 / nb2 ; 
//     printf("le nombre totale est de %d" , nombreTotale);

//     if (nb2 != 0 ){ 
//         printf("le nombre est bien différent de 0 ");
//     } else { 
//         printf("Erreur : division par 0 !");
//     }
//     return 0; 
// }

                        // Correction 

//                         int main() 
// {
// 	int nb1, nb2, resultat;	// Entiers : nb1, nb2, resultat
	
// 	printf("Division (entière) de deux entiers\n"); // Division : "Produit de deux entiers"
	
// 	printf("Entrez un nombre entier : "); // Afficher : "Entrez un nombre entier : "
// 	scanf("%d", &nb1);			// Entrer : nb1

// 	printf("Entrez un deuxième nombre entier : "); // Afficher : "Entrez un deuxieme nombre entier : "
// 	scanf("%d", &nb2);			// Entrer : nb2
	
// 	if(nb2 != 0) {              // Si(nb != 0)
// 	    resultat = nb1 / nb2;	    // resultat <-- nb1 / nb2;

//     	 printf("\n%d / %d = %d\n", nb1, nb2, resultat); // Afficher : "nb1 / nb2 = resultat"
// 	}  
// 	else {                      // Sinon
// 	    printf("\nErreur : division par 0 !\n");       // Afficher : "Erreur : division par 0 !"
// 	}
		
// 	return 0;
// }

//                                         EXERCICE 3  // 

// int main ( void) 
// { 
//     int nb1; 

//     printf("Veuillez saisirs votre nombre entier ");
//     scanf("%d", &nb1);
//     printf(" votre nombre entier est le : %d", nb1);

//     if(nb1 % 2 == 0 ){  // nb1 % 2 == 0 : permet de definir si le nombre et pair ou pas 
//         printf(" votre nombre %d est pair",nb1);
//     } else { 
//         printf(" votre nombre %d est impair", nb1);
//     }
// }

//                                       exercice  4  et 5 

// int main ( void ) 
// {   

// 	int reponse;	// Entier : reponse
// 	int essaie = 0 ; // ici on initialise la variable a 0 pour le nombre d'essaie 
//     // cela est obligatoir sinon cela va creé des probléme 

// 	do {				// Faire
// 		printf("Combien font 2 x 2 ? "); 
// 		scanf("%d", &reponse);

//      	essaie++; // permet de compte le nombre d'éssaie ! +1 a chaque fois que c'est faut

// 		if(reponse != 4) {			
// 			printf("\nFaux, recommencez\n"); 
// 		}
		

// 	} while (reponse != 4);
// 	printf("\nBravo , vous avez reussie en %d" , essaie , "fois ! ");	
	
// 	return 0;
// }


// Demander à l’utilisateur un nombre entier positif. Afficher tous les nombres pairs entre 0 et le nombre saisi."	

// int nombrePositif = 0 ; 

// printf("Veuillez saisir un nombre positif : ");
// scanf("%d", &nombrePositif);

// 	for (int i  = 0 ; i <= nombrePositif; i++ ) {
// 		if(i % 2 == 0) { 
// 			printf("%d\n", i);
// 		}
// 	}
 
// }
// 				// correction 
// 				int main()  // main désigne le programme principal
// {   // Les accolades servent à délimiter les blocs

// 	// Déclaration des variables
// 	int nb; // Je déclare une variable de type ENTIER (integer) dont le nom est nb
	
// 	printf("Entrez un nombre entier > 0 : ");  // Afficher : "Entrer un nombre entier > 0"
// 	scanf("%d", &nb);   // Entrer : nb (le %d indique un nombre entier)
	
// 	//Pour i de 0 à nb par incréments de 2
// 	for(int i = 0; i <= nb; i = i + 2)
// 	{
// 		printf("%d ",i); 	// Afficher : "i "
// 	}
// }

//					EXO CONDITION 

// exercice 1 

