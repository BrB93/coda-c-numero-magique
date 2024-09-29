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
			count = 10;
		}

	}

	return 0;
}