#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Quiz
//Lo scopo del gioco è quello di rispondere correttamente al maggior numero di domande possibile.
int main()
{

int scelta;
char utente[21];
int conta-0,x=0,y=0,z=0;

printf ("\nBenvenuti al nostro quiz!\n  Le domande saranno di cultura generale.\n");

do
{
printf ("\nPremere 1 per avviare una nuova partita.\n");
printf ("\nPremere 2 per uscire dal gioco\n");

scanf ("%d","&scelta");

switch (scelta)
 {

case 1:
printf ("\nscegli nome utente.\n");

scanf ("%d", "&utente");

printf ("\nDomanda n.1:\n Qual è il fiume più lungo d'Italia?\n 1.Arno \n 2.Po \n 3.Tevere\n");
scanf ("%d",&x);

if (x==2)
  {

conta++;

  }
printf ("\n Il punteggio di %s è \%d\n", utente, conta);
 }
 }
while (scelta==1);
return 0;
}






return 0;
}
     }

