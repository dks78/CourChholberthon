#include <stdio.h>
// Ecrire un programme C qui permet de comparer deux entiers a et b, et d’afficher selon le cas l’un des messages suivants: a=b, a>b ou a<b.
int main (void) {

    int a;
    int b;

    if( a == b ) { 
        printf("afficher a = b ");
    } else if ( a > b ) { 
        printf("afficher a > b ");
    } else if (a < b ) { 
        printf("afficher a < b ");
    } 
}
// correction 

// int main()
// {
//     int a,b;
//     printf("Donnez les deux entiers a comparer:\n");
//     scanf("%d%d",&a,&b);
//     if(a==b)
//     {
//        printf("%d=%d\n",a,b);
//     }
//     else
//     {
//        if(a<b)
//        {
//           printf("%d<%d\n",a,b);
//        } 
//        else
//        {
//           printf("%d>%d\n",a,b);
//        }
//     }
//     system("pause");
//     return 0;
// }

