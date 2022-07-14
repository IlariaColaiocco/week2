#include <stdio.h> 


int numero;
int numero2;
int  numero3;

int main()
{
//l'utente inserisce un numero da tastiera
printf ("Inserisci un numero intero in questa casella\n");

scanf ("%d",&numero);

{printf ("Il numero è: %d\n",numero);
//incremento e decremento la variabile "numero" di 1
int decremento=numero-1;
int incremento=numero+1;

// stampo a video l'incremento e il decremento del numero digitato.

printf ("Il decremento è %d\n", decremento);
printf ("L'incremento è: %d", incremento);

return 0;
}
}

