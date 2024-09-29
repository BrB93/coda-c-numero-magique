#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int count = 0;
	srand(time(NULL));
	int random_number = rand() % 100 + 1;

	int nombre_utilisateur;
	printf("Veuillez rentrer uniquement un nombre entier entre 1 et 100 : \n");
	scanf("%d", &nombre_utilisateur);

//Essais resolution du double appel scanf lors de la saisies du nombre entier.
	


	while (count < 10)
	{

		if (scanf("%d", &nombre_utilisateur) != 1) 
		{
        	printf("Vous n'avez pas renseigner un nombre entier entre 1 et 100, le jeu se termine, veuillez le relancer !\n");
        	return 1;
        }

		if (nombre_utilisateur < 1 || nombre_utilisateur > 100)
		{
			printf("Faites attention à bien renseigner un nombre entier entre 1 et 100 ! \n Allez-y :\n");
			count ++;
			continue;
		}


		if (nombre_utilisateur < random_number)
		{
			printf("Votre nombre est trop petit ! \n");
		}
		
		else if (nombre_utilisateur > random_number)
		{
			printf("Votre nombre est trop grand ! \n");
		}
		
		else if (nombre_utilisateur == random_number)
		{
			printf("Bravo ! \n");
			break;
		}
	count ++;
	if (count == 10)
	{
		printf("Vos 10 tentatives sont épuisées, le nombre magique était %d. \n Veuillez relancer le jeu. \n" , random_number);
	}

	}

	return 0;
}