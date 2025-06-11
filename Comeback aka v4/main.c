
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>



// MARCHE PAS A REGLER
/*
#include <stdio.h>
#define TAILLE_CLASSE 3

struct Etudiant {
	char nom[50];
	float moyenne;
};

// Prend un pointeur sur le tableau pour le remplir
void initialiser_classe(struct Etudiant classe[], int taille) {
	for (int i = 0; i < taille; i++) {
		printf("--- Saisie Etudiant %d ---\n", i + 1);
		printf("Nom : ");
		scanf_s("%s", classe[i].nom);
		printf("Moyenne : ");
		scanf_s("%f", &classe[i].moyenne);
	}
}

void afficher_classe(const struct Etudiant classe[], int taille) {
	printf("\n--- Liste de la classe ---\n");
	for (int i = 0; i < taille; i++) {
		printf("- %s, moyenne: %.2f\n", classe[i].nom, classe[i].moyenne);
	}
}

// Retourne un pointeur sur l'étudiant avec la meilleure note
struct Etudiant* meilleur_etudiant(struct Etudiant classe[], int taille) {
	if (taille == 0) {
		return NULL;
	}

	struct Etudiant* p_meilleur = &classe[0];

	for (int i = 1; i < taille; i++) {
		if (classe[i].moyenne > p_meilleur->moyenne) {
			p_meilleur = &classe[i];
		}
	}
	return p_meilleur;
}

int main() {
	struct Etudiant ma_classe[TAILLE_CLASSE];

	initialiser_classe(ma_classe, TAILLE_CLASSE);
	afficher_classe(ma_classe, TAILLE_CLASSE);

	struct Etudiant* major_de_promo = meilleur_etudiant(ma_classe, TAILLE_CLASSE);

	if (major_de_promo != NULL) {
		printf("\nLe meilleur etudiant est %s avec %.2f de moyenne.\n",
			major_de_promo->nom, major_de_promo->moyenne);
	}

	return 0;
}





/*
#include <stdio.h>

struct Etudiant {
char nom[50];
char prenom[50];
float moyenne;
};

void afficher_etudiant(struct Etudiant etu);  // prototype de la fonction (sers a la introduire la fonction ici pour qu'elle soit
											  // lue au début du programme mais sans la définir au début)

// La fonction prend un POINTEUR sur Etudiant
void augmenter_moyenne(struct Etudiant* p_etu, float points) {
	// On utilise la flèche '->' pour accéder à un membre via un pointeur
	p_etu->moyenne += points;
	// C'est l'équivalent de : (*p_etu).moyenne += points;
}

int main() {
	struct Etudiant etu1;
	strcpy(etu1.nom, "Martin");
	strcpy(etu1.prenom, "Alice");
	etu1.moyenne = 16.0;

	printf("Avant augmentation : ");
	afficher_etudiant(etu1);

	augmenter_moyenne(&etu1, 1.5); // On passe l'adresse de la structure

	printf("Après augmentation : ");
	afficher_etudiant(etu1); // Affiche une moyenne de 17.5

	return 0;
}
//... définition de afficher_etudiant ici
void afficher_etudiant(struct Etudiant etu) {
	printf("Etudiant: %s %s, Moyenne: %.2f\n", etu.prenom, etu.nom, etu.moyenne);
}







/*
#include <stdio.h>

struct Etudiant {
	char nom[50];
	char prenom[50];
	float moyenne;
};

void afficher_etudiant(struct Etudiant etu) {
	printf("Etudiant: %s %s, Moyenne: %.2f\n", etu.prenom, etu.nom, etu.moyenne);
}

int main() {
	struct Etudiant etu1;
	strcpy(etu1.nom, "Martin");
	strcpy(etu1.prenom, "Alice");
	etu1.moyenne = 16.0;

	afficher_etudiant(etu1);
	return 0;
}













/*
#include <stdio.h>

struct Etudiant {
	char nom[50];
	char prenom[50];
	float moyenne;
};

int main() {
	struct Etudiant etu1;

	strcpy(etu1.nom, "Dupont");
	strcpy(etu1.prenom, "Jean");
	etu1.moyenne = 14.5;

	printf("Etudiant: %s %s, Moyenne: %.2f\n", etu1.prenom, etu1.nom, etu1.moyenne);

	return 0;
}











/*
#include <stdio.h>
void incrementer(int *valeur) {
(*valeur)++; // ou *valeur = *valeur + 1;
}

int main() {
	int compteur = 10;
	printf("Avant : %d\n", compteur);
	incrementer(&compteur); // On passe l'adresse de compteur
	printf("Après : %d\n", compteur); // Affiche 11
	return 0;
}













/*
#include <stdio.h>
int main() {
int age = 30; // on déclare la valeur de la variable age a 30 
int* p_age = &age; // on initialise le pointeur p_age sur l'adresse de age (donnée par &age)

printf("Age avant modification : %d\n", age); // la ducoup on affiche l'age avant de la modifier 

// On modifie la valeur à l'adresse pointée
*p_age = 40; // on utilise '*' + 'p_age' pour avoir la valeur stockée dans l'adresse, et on modifie la valeur

printf("Age après modification : %d\n", age); // Affiche 40 !

return 0;

}



// age = 18 ; cest la variable de base, 
// *p_age = valeur de age,
// &age ; cest l'adresse de age,
// p_age = &age; cest encore l'adresse,



















/*
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