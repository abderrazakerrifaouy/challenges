#include <stdio.h>
#include <stdlib.h>




int main(){
     char numero[30];
    int age ;
    char name[20] ;
    char kenayetk[20] ;
      //saisir les informations
     printf(" enterz votre nom ; ");
     scanf("%s",name);
     printf("enterz votre nom de famille ; ");
     scanf("%s",kenayetk);
     printf(" enterz votre age ; ");
     scanf("%d",&age);
     printf(" enterz votre nemero de fone ; ");
     scanf("%s",numero);
     // imprimer les informations
     printf("  user nom ;  %s \n  ",name);
     printf("  nom de famille ;  %s \n ",kenayetk);
     printf("  age ; %d \n",age);
     printf("  nemero de telefone %s ; \n",numero);

}
