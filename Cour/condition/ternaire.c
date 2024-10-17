#include <stdio.h>

int main (void) { 
    // ternaire est une condition sur une seul ligne

    int age = 15;
    // si age = 15 tu a 15 ans sinon tu n'a pas 15 ans 
    (age == 15) ? printf("tu a 15 ans ") : printf("tu n'a pas 15 ans. \n");
    
    (age == 15) ? 1 : 0;  // boolean age = a 15 , vrai ou faux 
    return 0;
}