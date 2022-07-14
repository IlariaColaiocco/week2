#include <stdio.h> 


int numero;
int decremento;
int incremento;


int main()
{
//l'utente inserisce un numero da tastiera
printf ("Inserisci un numero intero in questa casella\n");

scanf ("%d",&numero);

decremento=numero-1;
incremento=numero+1;

printf ("Il numero è: %d\n",numero);

// stampo a video l'incremento e il decremento del numero digitato.

printf ("Il decremento è %d\n", decremento);
printf ("L'incremento è: %d", incremento);

return 0;

}

