#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nombreEntre = 0; nombreMystere = 0;

	while (nombreMystere => 0 && =< 100)
	{
		printf("Entrez le nombre mystère");
		scanf("%d", &nombreMystere);
	}

	while (nombreEntre != nombreMystere)
	{
		printf("Quel est le nombre mystere ?");
		scanf("%d", &nombreEntre);
		
		if (nombreEntre < nombreMystere)
			printf("c'est plus !\n");

		else if (nombreEntre > nombreMystere)
			printf("C'est moins !\n");

		else 
			printf("Bravo, vous avez trouvé le nombre mystere !\n");

		return 0;
	}

}
