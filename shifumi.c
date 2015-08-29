#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
/* 
** Variables utiles pour le shifumi
** a et b sont les choix possibles, c le nombre de manches et s le score 
*/
int a = 0, b = 0, c = 0, s_player = 0, s_IA = 0;  

system("clear");
/* system("cls"); */
printf("      ~Shifumi~   \n");
printf("Combien de manches? ");
scanf("%d", &c);

while(c != 0)
{
  
  // Partie joueur
  
  printf("Manches restantes : %d   Score player: %d \n"
                              ,c                 ,s_player);
  printf("                         Score IA : %d  \n\n"
                                              ,s_IA);
  printf("    1. Pierre   2. Papier   3. Ciseaux    \n");
  printf("Quel est ton choix? ");
  scanf("%d", &a);
  system("clear");
  /* system("cls"); */
  // Partie IA
  srand(time(NULL));
  b = rand() % 3 + 1;
  
  // Partie tests
  if(a == 1 && b == 1)
  {
  printf("\nTu as choisi Pierre\n");
  printf("IA a choisi Pierre\n");
  printf("Egalité\n\n");
  }
  else if(a == 1 && b == 2)
  {
  printf("\nTu as choisi Pierre\n");
  printf("IA a choisi Papier\n");
  printf("Perdu\n\n");
  s_IA++;
  c--;
  }
  else if(a == 1 && b == 3)
  {
  printf("\nTu as choisi Pierre\n");
  printf("IA a choisi Ciseaux\n");
  printf("Gagné\n\n");
  s_player++;
  c--;
  }
  else if(a == 2 && b == 1)
  {
  printf("\nTu as choisi Papier\n");
  printf("IA a choisi Pierre\n");
  printf("Gagné\n\n");
  s_player++;
  c--;
  }
  else if(a == 2 && b == 2)
  {
  printf("\nTu as choisi Papier\n");
  printf("IA a choisi Papier\n");
  printf("Egalité\n\n");
  }
  else if(a == 2 && b == 3)
  {
  printf("\nTu as choisi Papier\n");
  printf("IA a choisi Ciseaux\n");
  printf("Perdu\n\n");
  s_IA++;
  c--;
  }
  else if(a == 3 && b == 1)
  {
  printf("\nTu as choisi Ciseaux\n");
  printf("IA a choisi Pierre\n");
  printf("Perdu\n\n");
  s_IA++;
  c--;
  }
  else if(a == 3 && b == 2)
  {
  printf("\nTu as choisi Ciseaux\n");
  printf("IA a choisi Papier\n");
  printf("Gagné\n\n");
  s_player++;
  c--;
  }
  else if(a == 3 && b == 3)
  {
  printf("\nTu as choisi Ciseaux\n");
  printf("IA a choisi Ciseaux\n");
  printf("Egalité\n\n");
  }
}
 
  printf("\nGame over,\n");
  printf("Your score : %d\n"
                       ,s_player);
  printf("IA's score : %d\n"
                       ,s_IA);


return EXIT_SUCCESS;
}
