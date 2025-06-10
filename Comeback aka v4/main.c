#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
















/*
int rcarre(int nombre) {
	nombre = sqrt(nombre);
	return nombre;
}

int main() {
	
	srand(time(NULL));

	
	int i = rand()%3;
	printf("%d \n \n \n", i);
	
	int tab[4] = { 16, 9, 81, 25 };
	

	int a;

	int reponse = 30 ;
	int ruser;
	
	
	int rareponse = rcarre(tab[i]);
	int rauser;

	int racuser;

	printf("Voulez vous commencer? \n tapez 1 pour oui et 0 pour non");
		scanf_s("%d", &a);

		if (a == 0) {
			printf("Bonne journée \n Fin du programme......:C ");
		}
		else {
			printf("D'accord, commencons : \n combien font 3 fois 10 ? ");
				scanf_s("%d", &ruser);

				if (ruser == reponse) {
					printf("Bravo c'est exact ! Prochaine question : \n Quelle est la racine carree de %d ? ", tab[i]); // a complexifier avec un nombre rdm
						scanf_s("%d", &rauser);

						if (rauser == rareponse) {
							printf("Encore felicitations! , maintenant donnez moi un nombre et je vous donnerai sa racine carree \n Entrer un nombre positif :");
							scanf_s("%d", &racuser);

							printf("Vous avez choisi %d comme nombre! \n \n ", racuser);
							printf("La racine carree de votre nombre  est %d ! \n Au revoir !",  rcarre(racuser));

						}
						else {
							printf("Mauvaise reponse! \n Arret du programme :C");
						}
				
				}
				else {
					printf("Mauvaise reponse! \n Arret du programme :C");
				}
		}
		return 0;
}














/*
int main() {
	int age = 30;
	int* ptr_age; // Déclaration d'un pointeur vers un entier

	ptr_age = &age; // Le pointeur contient maintenant l'adresse de la variable 'age'

	printf("Valeur de 'age' : %d\n", age);
	printf("Adresse de 'age' : %p\n", &age);
	printf("Valeur du pointeur (l'adresse qu'il contient) : %p\n", ptr_age);
	printf("Valeur pointée par le pointeur : %d\n", *ptr_age);

	// Modifier la valeur de 'age' en utilisant le pointeur
	*ptr_age = 31;
	printf("Nouvelle valeur de 'age' : %d\n", age);

	return 0;
}











/*
int max_de_deux(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main(int a, int b) {
	printf("donne moi un nombre : ");
	scanf_s("%d", &a);
	printf("donne moi un autre nombre : ");
	scanf_s("%d", &b);

	printf("le plus grand nombre est %d  \n", max_de_deux(a, b));
	return 0;

}



int carre(int nombre) {
	return nombre * nombre;
}

int main() {
	int reponse = 0;
	printf("Ecrire le nombre que vous voulez mettre au carré : \n");
		
	scanf_s("%d", &reponse);

		printf("le carré de votre nombre est : %d \n",carre(reponse));

		return 0; 




}

*/