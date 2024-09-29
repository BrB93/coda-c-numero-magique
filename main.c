#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int count = 0;
	srand(time(NULL));
	int random_number = rand() % 100 + 1;

	int nombre_utilisateur;
	printf("Veuillez rentrer un nombre entier : \n" );
	scanf("%d", &nombre_utilisateur);

	while (count < 10)
	{
		if (nombre_utilisateur < random_number)
		{
			printf("Votre nombre est trop petit! \n");
			count = count + 1;
		}
		else if (nombre_utilisateur > random_number)
		{
			printf("Votre nombre est trop grand \n");
			count = count + 1;
		}
		else if (nombre_utilisateur == random_number)
		{
			("Bravo! \n");
			count = count + 1;
			

		}

	}



	return 0;
}