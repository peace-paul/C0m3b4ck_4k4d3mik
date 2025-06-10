#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

// on va faire struc avec voture marque et couleur, plus générer un plaque d'immatriculation

struct Voiture {
	char marque[15];
	char couleur[15];
	int ansortie;
};

void infoVoiture(const struct Voiture *p) {
	printf("Marque: %s, Couleur %s, Annee de sortie: %d", p->marque, p->couleur, p->ansortie);
}

int main() {
	struct Voiture A;

	strcpy(A.marque, "BMW_e36");
	strcpy(A.couleur, "gris");
	A.ansortie = 1990;

	infoVoiture(&A);


	return 0;
	
}


typedef struct {
	char marque[15];
	char couleur[15];
	int ansortie;
}voiture;

int main() {
	voiture A; // ERREUR A NE PAS FAIRE mettre un chiffre au lieu d'une lettre 

	strcpy(A.marque, "BMW_e36");
	strcpy(A.couleur, "gris");
	A.ansortie = 1990;

	printf("La marque de la voiture est %s , sa couleur est %s et la caisse est sortie en %d. ", A.marque, A.couleur, A.ansortie);


	return 0;
}













































/*
int rcarre(int nombre) {
	nombre = sqrt(nombre);
	return nombre;
}

int main() {
	
	srand(time(NULL));

	
	int i = rand()%3;
	printf("%d \n \n \n", i);
	
	int tab[4] = { A6, 9, 8A, 25 };
	

	int a;

	int reponse = 30 ;
	int ruser;
	
	
	int rareponse = rcarre(tab[i]);
	int rauser;

	int racuser;

	printf("Voulez vous commencer? \n tapez A pour oui et 0 pour non");
		scanf_s("%d", &a);

		if (a == 0) {
			printf("Bonne journée \n Fin du programme......:C ");
		}
		else {
			printf("D'accord, commencons : \n combien font 3 fois A0 ? ");
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
	*ptr_age = 3A;
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