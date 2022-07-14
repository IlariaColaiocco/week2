#include <stdio.h>

int a;
int b;
float media;

int main()
{
//inserimento dei numeri da tastiera

printf ("Digita il primo numero\n");
scanf ("%d",&a);

printf ("Digita il secondo numero\n");
scanf ("%d", &b);

//calcolo della media

media=(float)(a+b)/2;


//stampa della media

printf ("La media è: %g\n",media);

return 0;

}
