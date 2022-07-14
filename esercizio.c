#include <stdio.h>


// Quiz
//Lo scopo del gioco è quello di rispondere correttamente al maggior numero di domande possibile.
int main()
{ while (1)  //while serve ad avere un ciclo infinito.
	{
printf ("\n Benvenuti al nostro quiz!\n  Le domande saranno di cultura generale.\n");
printf ("Premere A per avviare la partita, premere B per uscire dal gioco\n");//menù di scelta
	char scelta;

scanf ("%s",&scelta);

	if (scelta=='A'||scelta=='a')
	{
	char utente[15];
	

	printf ("Scegli il nome dell'utente\n");
	scanf ("%s",&utente);

	int punteggio=0;
	int risposta;
	do{

	printf ("Qual è il fiume più lungo d'Italia?\n");
	printf ("\n1.Arno;\n2.Po;\n3.Tevere;\n");
	scanf ("%d",&risposta);

	if (risposta==2)
	{
	punteggio ++;}
	else {
	printf("Risposta non corretta\n");}

	}
	while (risposta!=1 && risposta!=2 && risposta!=3);

	printf ("Qual è la capitale dell'Italia?\n");
	printf ("1.Milano;\n2.Roma;\n 3.Firenze;\n");
	scanf ("%d",&risposta);
		if (risposta==2)

	punteggio ++;

	printf("%s, il tuo punteggio è: %d\n",utente, punteggio);


 	}
	else if (scelta=='B'||scelta=='b')
 	{
	printf ("Uscita dal gioco..Attendere prego.\n");
	return 0;

	}
	else
	{printf ("Valore non valido.\n");

}
}
}
