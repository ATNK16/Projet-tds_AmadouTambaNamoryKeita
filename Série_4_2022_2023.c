//Serie 4 de structures de données 2022-2023
#include <stdio.h>
#include <stdlib.h>


//Serie 4 : 

/*Exercice_1 :

//Structure permettant de représenter un nombre complexe 

typedef struct {
	double reel ;
	double img ;
	
}complexe; 


complexe saisir (complexe z){
	printf("Veuillez saisir la partie reel du nombre complexe : ");
	scanf("%lf",&z.reel);
	printf("Veuillez saisir la partie imaginaire du nombre complexe : ");
	scanf("%lf",&z.img);
	return z ;
}

void afficher (complexe z){
	printf("Le nombre complexe est : ");
	if(z.img >= 0){
		printf(" %.2lf + %.2lfi\n",z.reel,z.img);
	}
	else {
		printf(" %.2lf %.2lfi\n",z.reel,z.img);
	}
	
	
}
double imag (complexe z){
	return z.img ;	
}

double real (complexe z){
	return z.reel;	
}

complexe mul (complexe z1, complexe z2){
	complexe z ;
	z.reel = (z1.reel * z2.reel) - (z1.img * z2.img) ;
	z.img = (z1.reel * z2.img) + (z1.img * z2.reel) ;
	return z ;
}


int main (){
	complexe z1 , z2, z ;
	z1 = saisir(z1);
	z2 = saisir(z2);
	afficher(z1);
	afficher(z2);
	z = mul(z1,z2);
	afficher(z);
	
	
	
	
return 0 ;}*/


/*Exercice_2 :

typedef struct {
	int jour ;
	char mois [10];
	int annee;
}date;

typedef struct {
	char nom [15];
	char prenom [15];
	date date_naissance , date_embauche ;
}employe;

//1

void saisir_infos(employe e [] , int n ){
	int i ;
	for (i = 0 ; i < n ; i++){
		printf("Veuillez saisir le nom de l'employe %d : ",i+1);
		scanf("%s",&e[i].nom);
		printf("Veuillez saisir le prenom de l'employe %d : ",i+1);
		scanf("%s",&e[i].prenom);
		printf("Veuillez saisir le jour de naissance de l'employe %d : ",i+1);
		scanf("%d",&e[i].date_naissance.jour);
		printf("Veuillez saisir le mois de naissance de l'employe %d : ",i+1);
		scanf("%s",&e[i].date_naissance.mois);
		printf("Veuillez saisir l'annee de naissance de l'employe %d : ",i+1);
		scanf("%d",&e[i].date_naissance.annee);
		printf("Veuillez saisir le jour d'embauche de l'employe %d : ",i+1);
		scanf("%d",&e[i].date_embauche.jour);
		printf("Veuillez saisir le mois d'embauche de l'employe %d : ",i+1);
		scanf("%s",&e[i].date_embauche.mois);
		printf("Veuillez saisir l'annee d'embauche de l'employe %d : ",i+1);
		scanf("%d",&e[i].date_embauche.annee);
		system("cls");
		
	}
	
}

void afficher_infos (employe e[] , int n ){
		int i ;
	for (i = 0 ; i < n ; i++){
		printf("Les infos de l'employe N*%d sont :\n",i+1);
		printf("Nom : %s\n",e[i].nom);
		printf("Prenom : %s\n",e[i].prenom);
		printf("Date de naissance : %d %s %d \n",e[i].date_naissance.jour,e[i].date_naissance.mois,e[i].date_naissance.annee);
		printf("Date d'embauche : %d %s %d \n",e[i].date_embauche.jour,e[i].date_embauche.mois,e[i].date_embauche.annee);
}
}


int main (){
	employe e [4] ;
	saisir_infos(e,1);
	afficher_infos(e,1);
}*/

/*Exercice_3 : 


typedef struct {
	char nom [15] ;
	char prenom [15];
	int cne ;
	float notes [4];
	float moyenne ;
}etudiant;

void saisir (etudiant t[] , int n){
	int i, j;
	float somme = 0 ;
	for ( i = 0 ; i < n ; i++){
		printf("Veuillez saisir le prenom de l'etudiant %d : ",i+1);
		scanf("%s",&t[i].prenom);
		printf("Veuillez saisir le nom de l'etudiant %d : ",i+1);
		scanf("%s",&t[i].nom);
		printf("Veuillez saisir le cne de l'etudiant %d : ",i+1);
		scanf("%d",&t[i].cne);
		somme = 0 ;
		for ( j = 0 ; j < 4 ; j++){
			printf("Veuillez saisir la note %d de l'etudiant %d : ",j+1,i+1);
			scanf("%f",&t[i].notes[j]);
			somme += t[i].notes[j];
		}
		t[i].moyenne = somme / 4 ;
		system("cls");
	}
}

void chercher (etudiant t[] , int n ){
	float max ;
	int i, pos;
	max = t[0].moyenne;
	pos = 0 ;
	for ( i = 1 ; i < n ; i++){
		if(max < t[i].moyenne){
			max = t[i].moyenne ;
			pos = i ;
		}
	}
	printf("Prenom : %s\n",t[pos].prenom);
	printf("Nom : %s\n",t[pos].nom);
	printf("Cne : %d\n",t[pos].cne);
	for(i = 0 ; i < 4 ; i++){
		printf("Note_%d : %.2f\n",i+1,t[pos].notes[i]);
	}
	printf("Moyenne : %.2f\n",t[pos].moyenne);
	
}

void Trier 



int main(){
	etudiant t[5];
	saisir(t,2);
	chercher(t,2);
	
	
	
	
	
return 0;}*/



/*Exercice_4 :


typedef struct {
	char nom [20] ;
	char prenom [20] ;
	char telephone [10];
	
}repertoire ;


void saisir_infos (repertoire r[], int n ){
	int i;
	for ( i = 0 ; i < n ; i++){
		printf("Veuillez saisir le prenom du client %d : ",i+1);
		scanf("%s",&r[i].prenom);
		printf("Veuillez saisir nom du client %d : ",i+1);
		scanf("%s",&r[i].nom);
		printf("Veuillez saisir le numero de telephone du client %d : ",i+1);
		scanf("%s",&r[i].telephone);
		system("cls");
	}
		
}

void afficher_infos (repertoire r[], int n ){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("Contact N_%d : \n",i+1);
		printf("Prenom : %s\n",r[i].prenom);
		printf("Nom : %s\n",r[i].nom);
		printf("Telephone : %s\n",r[i].telephone);
	}
}



int main () {
	repertoire r [20];
	saisir_infos(r,2);
	afficher_infos(r,2);
	
	
	
return 0 ;}*/


/*Exercice_5 :
int nb_occurrence(char T[], int n, char c){
int i, cmp=0, p_occ, d_occ;
for(i=0; i<n; i++)
if(T[i] == c){
p_occ = i;
break;
}
printf("p_occ = %d \n", p_occ);
for(i=n; i>0; i--)
if(T[i] == c){
d_occ = i;
break;
}
printf("d_occ = %d \n", d_occ);
for(i=0; i<n; i++)
if(T[i] == c) cmp++;
return cmp;
}
int main(){
int t;
char h;
printf("Donner la taille du tableau: ");
scanf("%d",&t);
char A[t];
printf("Saisir les caracteres: ");
scanf(" %s",A);
printf("Donner le caracter a cherche: ");
scanf(" %c",&h);
printf("Le nombre des occuences est: %d",nb_occurrence(A, t, h));
}*/

/*Exercice_6 : 

typedef struct {
	float longueur ;
	float largeur ;
	float epaisseur ;
	int type ;	
}Panneau;


void saisir (Panneau p [] , int n ){
	int i ;
	for( i = 0 ; i < n ; i++){
		printf("Veuillez saisir la longueur du panneau %d : ",i+1);
		scanf("%f",&p[i].longueur);
		printf("Veuillez saisir la largeur du panneau %d : ",i+1);
		scanf("%f",&p[i].largeur);
		printf("Veuillez saisir l'epaisseur du panneau %d : ",i+1);
		scanf("%f",&p[i].epaisseur);
		printf("1.Pin\n2.Chene\n3.Hetre\nVeuillez saisir le type de panneau %d : ",i+1);
		scanf("%d",&p[i].type);
	}
	
}

void afficher (Panneau p[] ,int n ){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("Panneau N_%d : \n",i+1);
		printf("Longueur : %.2f m\n",p[i].longueur);
		printf("Largeur : %.2f m\n",p[i].largeur);
		printf("Epaisseur : %.2f mm\n",p[i].epaisseur);
		switch(p[i].type){
			case 1 : 
				printf("Type de bois : Pin\n");
				break;
			case 2 : 
				printf("Type de bois : Chene\n");
				break;
			case 3 : 
				printf("Type de bois : Hetre\n");
				break;
		}
		
	}
}

void volume (Panneau p[] ,int n){
	int i ;
	float volume ;
	for ( i = 0 ; i < n ; i++){
		volume = p[i].longueur * p[i].largeur * p[i].epaisseur * 0.001 ;
		printf("Volume panneau N_%d : %.2f m3\n",i+1,volume);
	}
}

int main() {
	Panneau p [10] ;
	saisir(p,1);
	afficher(p,1);
	volume(p,1);
	
	
	
return 0 ;}*/

/*Exercice_7: 

typedef struct {
	int reference ;
	float prix ;
	int quantite;
}Produit;

void saisir_produit(Produit p [] ,int n){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("Veuillez saisir la reference du produit %d : ",i+1);
		scanf("%d",&p[i].reference);
		printf("Veuillez saisir le prix du produit %d : ",i+1);
		scanf("%f",&p[i].prix);
		printf("Veuillez saisir la quantite du produit %d : ",i+1);
		scanf("%d",&p[i].quantite);
		
	}	
}

void afficher_produit(Produit p [] , int n ){
	int i ;
	for( i = 0 ; i < n ; i++){
		printf("Produit N_%d : \n",i+1);
		switch(p[i].reference){
			case 1 : 
				printf("Reference : Carte mere\n");
				break;
			case 2 : 
				printf("Reference : Processeur\n");
				break;
			case 3 : 
				printf("Reference : Barette memoire\n");
				break;
			case 4 : 
				printf("Reference : Carte graphique\n");
				break;
			default :
				printf("Reference inexistante\n");
		}
		printf("Prix : %.2f DH\n",p[i].prix);
		printf("Quantite : %d\n",p[i].quantite);
		
	}
	
	
}

void commande_produit (Produit p[] , int n){
	int i , choix , quant; 
	printf("1.Carte mere\n2.Processeur\n3.Barette memoire\n4.Carte graphique\nVeuillez saisir un produit: ");
	scanf("%d",&choix);
	printf("Veuillez saisir la quantite du produit : ");
	scanf("%d",&quant);
	for ( i = 0 ; i < n ; i++){
		if (choix == p[i].reference){
		printf("Produit N_%d : \n",i+1);
		switch(p[i].reference){
			case 1 : 
				printf("Reference : Carte mere\n");
				break;
			case 2 : 
				printf("Reference : Processeur\n");
				break;
			case 3 : 
				printf("Reference : Barette memoire\n");
				break;
			case 4 : 
				printf("Reference : Carte graphique\n");
				break;
			default :
				printf("Reference inexistante\n");
		}
		printf("Prix : %.2f DH\n",p[i].prix);
		printf("Quantite : %d\n",p[i].quantite);
		if (quant <= p[i].quantite){
			printf("La commande de %d produits vous fera %.2f DH\n",quant,p[i].prix * quant);
		}
		else {
			printf("La quantite commandee est superieur a la quantite en stock\n");
		}
			break;	}
		

	}
}


int main () {
	Produit p[10];
	saisir_produit(p,3);
	system("cls");
	afficher_produit(p,3);
	commande_produit(p,3);
	
return 0 ;}*/

/*Exercice_8 :

typedef struct {
	int nb_elem ;
	int * tab ;
	
}TypeTableau;

TypeTableau Creation_Tab(int n){
TypeTableau T;
T.nb_elem = n;
T.tab = (int*)malloc( T.nb_elem * sizeof(T) );
return T;
}
void Simple_Lecture_Tab(TypeTableau T){
int i;
printf("\nVeuillez remplir les elements du tableau: \n");
for(i=0; i<T.nb_elem; i++){
printf("T[%d] = ",i);
scanf("%d",&T.tab[i]);
}}

void Affichage(TypeTableau T){
int i;
printf("Les elements du tableau sont: \n");
for(i=0; i<T.nb_elem; i++) printf("%d\t", T.tab[i]);
}
TypeTableau Double_Tab(TypeTableau T){
int i;
TypeTableau M;
M.nb_elem = T.nb_elem;
M.tab = (int*)malloc( M.nb_elem * sizeof(M) );
for(i=0; i<M.nb_elem; i++)
M.tab[i] = 2 * T.tab[i];
return M;
}
void Destruction_Tab(TypeTableau T){
free(T.tab);
}
int main(){
TypeTableau A;
int n;
printf("Donner la taille du tableau: ");
scanf("%d",&n);
A = Creation_Tab(n);
Simple_Lecture_Tab(A);
Affichage(A);
A = Double_Tab(A);
printf("\nApres le calcule du double: \n");
Affichage(A);
Destruction_Tab(A);
}*/




