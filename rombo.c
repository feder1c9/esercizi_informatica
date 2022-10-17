/* Questo programma permette di calcolare l'area, il perimetro e le diagonali 
relative ad un rombo */

#include <stdio.h>

#define TITOLO "\tFormulario di Geometria Del Rombo\n\n"
#define MENU "a)Area\nb)Perimetro\nc)Diagonale Maggiore\nd)Diagonale Minore\n\t\nScegli un' opzione: "
#define ERRORE "\nERR. Non hai selezionato nulla. Riprovare\n"

void main(void)
 {
      char scelta[1024];
      
      float lato, perimetro, area, diagonale_max, diagonale_min;
      
      printf(TITOLO);
      printf(MENU);
      
      scanf("%s",scelta);
      
      if(scelta[0]=='a')
       {
            printf("\nInserisci il valore della diagonale minore: ");
            scanf("%f",&diagonale_min);
            
            printf("\nInserisci il valore della diagonale maggiore: ");
            scanf("%f",&diagonale_max);
            
            area = (diagonale_max * diagonale_min) / 2;
            
            printf("L'area e' pari a: %f\n",area); 
       }
      else
       {
            if(scelta[0]=='b')
             {
                  printf("\nInserisci il valore del lato: ");
                  scanf("%f",&lato);
                  
                  perimetro = lato * 4;
                  
                  printf("Il perimetro e' pari a: %f\n",perimetro);
             }
            else
             {
                  if(scelta[0]=='c')
                   {
                        printf("\nInserisci il valore della diagonale minore: ");
                        scanf("%f",&diagonale_min);
                        
                        printf("\nInserisci il valore dell'area: ");
                        scanf("%f",&area);
                        
                        diagonale_max = (2 * area) / diagonale_min;
                        
                        printf("La diagonale maggiore e' pari a: %f\n",diagonale_max); 
                   }
                  else
                   {
                        if(scelta[0]=='d')
                         {
                              printf("\nInserisci il valore della diagonale maggiore: ");
                              scanf("%f",&diagonale_max);
                              
                              printf("\nInserisci il valore dell'area: ");
                              scanf("%f",&area);
                              
                              diagonale_min = (2 * area) / diagonale_max;
                              
                              printf("La diagonale minore e' pari a: %f\n",diagonale_min); 
                         }
                        else
                         {
                              printf(ERRORE); 
                         }
                   }
             }             
       }
 }
