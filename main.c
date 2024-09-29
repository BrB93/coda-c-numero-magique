#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int count = 0;
	srand(time(NULL));
	int random_number = rand() % 100 + 1;

	int nombre_utilisateur;
	printf("\n\n----------Bienvenue dans el magico nombre (le numero magique)----------\n\n");
	printf("\n\nVeuillez rentrer uniquement un nombre entier entre 1 et 100 :\n\n");
	

	while (count < 10)
	{

		if (scanf("%d", &nombre_utilisateur) != 1) 
		{
        	printf("\n\nVous n'avez pas renseigner un nombre entier entre 1 et 100, le jeu se termine, veuillez le relancer !\n\n");
        	return 1; // Fin du jeu si l'utilisateur rentre autre chose qu'un nombre entier.
        }

		if (nombre_utilisateur < 1 || nombre_utilisateur > 100)
		{
			printf("\n\nFaites attention à bien renseigner un nombre entier entre 1 et 100 !\n\nAllez-y :\n\n");
			count ++;
			if (count == 10)
			{
				printf("\n\nLe nombre magique était %d. Merci de relancer le jeu.\n\n", random_number);
				break;
			}
			continue;
		}


		if (nombre_utilisateur < random_number)
		{
			printf("\nVotre nombre est trop petit ! Veuillez l'augmenter.\n\n");
		}
		
		else if (nombre_utilisateur > random_number)
		{
			printf("\nVotre nombre est trop grand ! Veuillez le diminuer.\n\n");
		}
		
		else
		{
			printf("\n\n-----Bravo !-----\n\n");
			printf("\n\n-----Merci d'avoir utilisé ce jeu!-----\n\n");
			break;
		}
		count ++;
		if (count == 10)
		{
			printf("\n\nVos 10 tentatives sont épuisées, le nombre magique était %d.\n\n Veuillez relancer le jeu.\n\n" , random_number);
			break;
		}

		printf("Veuillez rentrer un nombre entier entre 1 et 100 :\n\n");

	}

	return 0;
}