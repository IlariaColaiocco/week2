#include <stdio.h>


float a,b,media;

int main()
{
//inserimento dei numeri da tastiera

printf ("Digita il primo numero\n");
scanf ("%f",&a);

printf ("Digita il secondo numero\n");
scanf ("%f", &b);

//calcolo della media

media=(a+b)/2;


//stampa della media

printf ("La media è: %6.2f",media);

return 0;

}
