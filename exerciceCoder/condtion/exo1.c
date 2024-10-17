#include <stdio.h>
 // condition 

int main ( void ) { 

	int nombre = 2 ; 

	if(	nombre % 2 == 0 ) { 
		printf("le nombre est pair\n");
	} else { 
		printf("le nombre est impair\n");
	}
}


 // corection 
 int main()
{
    int a;
    printf("Donnez un entier:\n");
    scanf("%d",&a);
    if(a%2==1)
    {
       printf("%d est impair\n",a);
    }
    else
    {
       printf("%d est pair\n",a);
    }
    system("pause");
    return 0;
}