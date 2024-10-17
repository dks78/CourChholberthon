#include <stdio.h>

int main(void)
{
    // int age = 15;

    // // switch (age) {

    // //         case 0 :
    // //             printf("tu a 0 ans ");
    // //             break;
    // //         case 15 :
    // //             printf("tu n'a ni 0 ans ni 15 ans");
    // //             break;

    // //     /*default: : C'est un label qui indique le bloc de code à exécuter si aucune des
    // //     valeurs spécifiées dans les case ne correspond à la valeur de la variable. C'est similaire à un else dans une instruction if.
    // //     break; : Cette instruction est utilisée pour sortir du bloc switch. Sans break, le programme continuerait à exécuter les instructions des case suivants,
    // //     ce qui pourrait entraîner des comportements inattendus (c'est ce qu'on appelle "fall-through").*/
    // //     default :
    // //     printf("ni l'un ni l'autre"); // cela va tester les cas 1 pas si aucubn ne rentre dans les cas precédent , sela va exécuter le default
    // //         break;
    // // }
    // // return 0 ;

    int choixMenu;

    float menuDelux = 15;
    float menuBurgeur = 17.56;
    float menumacfirst = 17.59;
    float menuSecond = 14.15;

    printf("0.le menuDelux a %.2f euros \n", menuDelux);
    printf("1. le menuBurgeur a %.2f \n", menuBurgeur);
    printf("2. le menumacfirst a %.2f \n", menumacfirst);
    printf("3. le menuSecond a %.2f \n", menuSecond);
    printf("quel est le choix de votre menu ? ");

scanf("%d", &choixMenu);


    switch (choixMenu)
    {
    case 0:
        printf("Vous avez choisi le menuDelux à %.2f\n", menuDelux); // Utilisez %.2f si menuDelux est un float
        break;
    case 1:
        printf("Vous avez choisi le menuBurgeur à %.2f\n", menuBurgeur); // Utilisez %.2f si menuBurgeur est un float
        break;
    case 2:
        printf("Vous avez choisi le menumacfirst à %.2f\n", menumacfirst); // Utilisez %.2f si menumacfirst est un float
        break;
    case 3:
        printf("Vous avez choisi le menuSecond à %.2f\n", menuSecond); // Utilisez %.2f si menuSecond est un float
        break;
    default:
        printf("Vous n'avez pas choisi le bon menu\n");
        break;
    }
    return 0;
    
}