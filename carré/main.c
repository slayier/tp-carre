#include <stdio.h>
#include <stdlib.h>


/* ALGO carr�
OBJECTIF on veux un carr�
ENTRER donn� la longeur et la largeur du carr�
SORTIE le carr� avec les conture en * et le l'interieur en +

VAR
L ENTIER
Larg ENTIER
i= ENTIER
j= ENTIER
DEBUT
ECRIRE entr� la longeur du carr�
LIRE L
ECRIRE entr� la largeur du carr�
LIRE larg

pour i de 1 a L FAIRE
    pour j de 1 a larg FAIRE
        SI i=1 ou j=1 ou i=L oi j=larg ALORS
        ECRIRE *
        SINON
        ECRIRE +
        FINSIN
    FINPOUR
FINPOUR
FIN


*/
int main()
{
    int L=0,larg=0,i=0, j=0;

   printf("entr� la Longeur\n ");
   scanf("%d",&L);
   printf("entr� la largeur\n");
   scanf("%d",&larg);
for (i=0;i<L;i++)
{
  for (j=0;j<larg;j++)
  {
      if((i==0)||(j==0)||(i==L-1)||(j==larg-1))
      {
          printf("*");
      } else
          printf("+");
  }
 printf("\n");
}






}
