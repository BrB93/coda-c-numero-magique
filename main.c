#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int count = 0;
	srand(time(NULL));
	int random_number = rand() % 100 + 1;

	int nombre_utilisateur;
	printf("Veuillez rentrer un nombre entier entre 1 et 100 : \n");
	scanf("%d", &nombre_utilisateur);


	while (count < 10)
	{
		
		if (nombre_utilisateur < random_number)
		{
			printf("Votre nombre est trop petit ! \n");
			count = count + 1;
			printf("Veuillez rentrer un nombre entier entre 1 et 100 : \n");
			scanf("%d", &nombre_utilisateur);
		}
		
		else if (nombre_utilisateur > random_number)
		{
			printf("Votre nombre est trop grand ! \n");
			count = count + 1;
			printf("Veuillez rentrer un nombre entier entre 1 et 100 : \n");
			scanf("%d", &nombre_utilisateur);
		}
		
		else if (nombre_utilisateur == random_number)
		{
			printf("Bravo ! \n");
			break;
		}

		else if (nombre_utilisateur > 100, nombre_utilisateur != int)
		{
			printf("Faites attention à bien renseigner un nombre entier entre 1 et 100 ! Allez-y :\n");
			count = count + 1;
			scanf("%d", &nombre_utilisateur);
		}


	}
	if (count = 10)
	{
		printf("Vos 10 tentatives sont épuisées, Veuillez relancer le jeu. \n");
	}

	return 0;
}