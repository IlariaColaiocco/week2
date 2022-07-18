def perimetro():   #DEF serve per dichiarare una funzione in Python, darle un nome e aggiungere dei parametri al suo intero.  In alcuni casi serve anche per ripetere il programma in maniera automatica
      print("il programma calcola il perimetro di una figura geometrica")  #Print viene utilizzato per stampare un output che il programmatore crea per l'utente, a cui risponderà con un input in entrata 
      print("""
     - Quadrato>>1
     - Rettangolo >>2
     - Cerchio>>3
     - Rombo>>4""")

      print('Inserire la scelta: ')
      scelta = int(input(">>> "))   #determinazione di una variabile, del suo nome e assegnazione di un valore correlato ad essa
      if scelta == 1:     #istruzione IF vincola l'utente ad effettuare una decisione e se la condizione si verifica inizia il blocco di istruzioni sotto riportato
         print("Hai selezionato il perimetro del Quadrato")
         lato = float(input("Inserisci il valore del lato del quadrato "))
         print("Il perimetro del Quadrato, avente lato", lato, "è:" , lato *4)
      elif scelta == 2:              #Elif è l'abbreviazione di if else , serve per non ripetere sempre lo stesso comando
          print("Hai selezionato il perimetro del Rettangalo")
          base = float(input("Inserisci il valore della base"))
          altezza = float(input("Inserisci il valore dell altezza"))
          print("Il perimetro del Rettangolo, avente base" , base, " e altezza",altezza, "è:" ,base*2 + 2*altezza)
      elif scelta == 3:
           print("Hai selezionato il perimetro del Cerchio")
           raggio = float(input("Inserisci il valore del raggio"))
           print("Il perimetro del cerchio,avente il raggio" , raggio, "è:" , raggio *2 * 3.14)
      elif scelta==4:
            print("Hai selezionato il perimetro del Rombo")
            lato = float(input("Inserisci il valore del lato"))
            print("Il perimetro del Rombo, avente il lato", lato, "è:" , lato * 4)
      else:					#Elif è l'abbreviazione di if else , serve per non ripetere sempre lo stesso comando
            print ("Inserire una scelta valida")
perimetro();         #il perimetro sta ad indicare la variabile che deve essere richiamata. É il modo per utilizzare la funzione.
