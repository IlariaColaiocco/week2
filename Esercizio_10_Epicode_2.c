#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();
void uscita();

int main ()

{

        char scelta ='\0';  //le parentesi graffe che contengono \0 sono errate in quanto il valore deve essere assegnato solo con le virgolette singole. Le ho tolte in quanto è un errore di sintassi.
	do{
	menu ();
	scanf (" %c", &scelta);  //ho modificato il carattere 'd' in quanto quello corretto per richiamare una variabile char è 'c'.


 		switch (scelta)
		{
		case 'A':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
		case 'D':    //ho inserito la casistica "uscita" che non era stata contemplata nel menù. 
		uscita;
		printf("Uscita in corso...");
 		break;
		return 0;
		default:     //ho aggiunto un'opzione di default nel caso in cui l'utente inserisca un valore non compreso nei tre casi
		printf ("Valore non valido.\n");
		break;
		}

	} while (scelta!='A', scelta!='B', scelta!='C', scelta!='D');  //ho aggiunto un ciclo do-while per i valori diversi da A,B,C,D ovvero non validi.
return 0;
}


void menu ()
{
	printf ("\nBenvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("\nCome posso aiutarti?\n");
	printf ("\nA>> Moltiplicare due numeri\nB>> Dividere due numeri\nC>> Inserire una stringa\nD>>Uscita dal menù\n");

}

void moltiplica ()
{
	short int a,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%hd", &a);  //ho modificato la percentuale f con percentuale hd in quanto il tipo di argomento non era conforme al tipo di variabile.
	scanf ("%hd", &b); //ho modificato la percentuale d con percentuale hd in quanto il tipo di argomento non era conforme al tipo di variabile.

	short int prodotto = a * b;

	printf ("Il prodotto tra %hd e %hd e': %hd\n", a,b,prodotto);
}


void dividi ()
{
        float  a,b = 0;    //ho inserito il tipo float per comprendere tutti i numeri reali
        printf ("Inserisci il numeratore:");
        scanf ("%f", &a); //ho modificato la "d" con la "f" in quanto float viene letto attraverso questo carattere 
	printf ("Inserisci il denumeratore:");
        scanf ("%f", &b);

       float  divisione=(float)  a / b; //la percentuale non porta alla divisione dei due numeri, serve lo \.    // Ho inserito il cast per la divisione in quanto il risultato può essere anche con la virgola.

       printf ("La divisione tra %f e %f è: %f \n", a,b,divisione);
}



void ins_string ()
{
	char stringa[10];
	int risposta=(1,2);
	printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
	printf ("Hai scritto %s, vuoi procedere con l'assistenza?\n1.Si\n2.No\n",stringa);    //ho provato ad ottimizzare il programma inserendo altre opzioni per l'utente
	scanf ("%d", &risposta);
	if(risposta==1){
	printf("\nAttendere prego...un operatore sarà presto disponibile per risolvere il tuo problema\n");
}else if(risposta==2||risposta!=1){
printf("Ritorno al menù principale\n");}

}
