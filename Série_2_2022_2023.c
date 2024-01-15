//Serie 2 de structures de données 2022-2023
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Exercice_1 :

//A Saiisie et Affichage 
void Saisir (int tab[] , int n ){
	int i;
	for ( i = 0 ; i < n ; i++){
		printf("Veuillez saisir l'element %d : ",i+1);
		scanf("%d",&tab[i]);
	}	
}

void Afficher (int tab[] , int n){
	int i ; 
	printf("Les valeurs du tableu sont : \n");
	printf("-------------------------------------------\n");
	printf("| ");
	for ( i = 0 ; i < n ; i++){
		printf("%d | ",tab[i]);
	}
	printf("\n-------------------------------------------\n");
}

//B Moyenne 

void Moyenne (int tab[] , int n){
	int i , moyenne = 0;
	for ( i = 0 ; i < n ; i++){
		moyenne += tab[i] ;
	}
	moyenne /= n ;
	printf("La moyenne des valeurs du tableau est : %.2f\n",moyenne);
}

//C Suppression du max et affichage

int Max_elem (int tab [] , int n ){
	int i , pos = -1 , max  ;
	max = tab[0];
	for ( i = 1 ; i < n ; i++){
		if(max < tab[i]){
			max = tab[i] ;
			pos = i ;
		}
	}
	return pos ;
}

int Supprimer (int tab [] , int n , int pos  ){
	int i , j ; 
	for( i = pos ; i < n - 1 ; i++){
		tab[i] = tab[i+1];
	} 
	return n - 1 ;
}

//D Suppression du min et affichage 

int Min_elem (int tab [] , int n ){
	int i , pos = -1 , min  ;
	min = tab[0];
	for ( i = 1 ; i < n ; i++){
		if(min > tab[i]){
			min = tab[i] ;
			pos = i ;
		}
	}
	return pos ;
}

//E Ajout d'un entier à une position donnée 

void Ajout (int tab [] , int n ){
	int val , pos , i ;
	printf("Veuillez saisir la valeur a inserer : ");
	scanf("%d",&val);
	printf("Veuillez saisir la position a laquelle la valeur sera inseree : ");
	scanf("%d",&pos);
	for ( i = 0 ; i < n ; i++){
		if (pos == i ){
			tab[i]= val ;
			break ; 
		}
	}
	if (pos != i ){
		printf("La position n'existe pas dans le tableau !\n");
	}
}

int menu (){
	int choix ;
	printf("Menu\n----------------------\n"); 
	printf("1.Saisir\n2.Afficher\n3.Supprimer le max\n4.Supprimer le min\n5.Ajouter une valeur\n6.Quitter\n");
	do{
	printf("Veuillez faire un choix : ");
	scanf("%d",&choix);}while(choix < 1 || choix >6);
	return choix;
	
} 
int main(){
	int tab[20] , n , pos_max , pos_min , choix;
	do{
		printf("Veuillez saisir la taille du tableau : ");
		scanf("%d",&n);
	}while (n > 20 || n <= 0);
	Saisir(tab,n);
	system("cls");
	do{
	choix = menu();
	switch(choix){
		case 1 :
			Saisir(tab,n);
			break;
		case 2 : 
			Afficher(tab,n);
			break;
		case 3 : 
			pos_max = Max_elem(tab,n);
			Supprimer(tab,n,pos_max);
			n -= 1 ;
			break;
		case 4 : 
			pos_min = Min_elem(tab,n);
			Supprimer(tab,n,pos_min);
			n -= 1 ;
			break;
		case 5 : 
			Ajout(tab,n);
			break;
		case 6 : 
			break;
			
	}}while(choix != 6);
return 0 ;}*/
/*Exercice_2 : 


void saisir (int iMat [5][5]){
	int i,j; 
	for ( i = 0 ; i < 5 ; i++){
		for ( j = 0 ; j < 5 ; j++){
			printf("Veuillez saisir la valeur %d de la ligne %d : ",j+1,i+1);
			scanf("%d",&iMat[i][j]);
		}
	}
}
void affiche_matrice (int iMat[5][5]){
	int i, j ;
	printf("Les elements de la matrice sont : \n");
	for ( i = 0 ; i < 5 ; i++){
		for ( j = 0 ; j < 5 ; j++){
			printf("[%d]\t",iMat[i][j]);
		}
		printf("\n");
		
	}
	
	
	
}

int main(){
	int iMat[5][5];
	saisir(iMat);
	affiche_matrice(iMat);
return 0 ;}*/

/*Exercice_3 :

void initialisation (int tab[]){
	int i ; 
	for ( i = 1 ; i < 13 ; i++ ){
		if ( i == 2 ){
			tab[i] = 28 ;
		}
		else if ((i % 2 == 0 && i <=7 )|| (i % 2 != 0 && i > 7)){
			tab[i] = 30 ;
		}
		else {
			tab[i] = 31 ;
		}
	}
}



void impression (int tab[]){
	int i ;
	for ( i = 1 ; i < 13; i ++){
		switch(i){
			case 1 : 
				printf("Janvier : %d jours \n",tab[i]);
				break;
			case 2 : 
				printf("Fevrier : %d jours \n",tab[i]);
				break;
			case 3 : 
				printf("Mars : %d jours \n",tab[i]);
				break;
			case 4 : 
				printf("Avril : %d jours \n",tab[i]);
				break;
			case 5 : 
				printf("Mai : %d jours \n",tab[i]);
				break;
			case 6 : 
				printf("Juin : %d jours \n",tab[i]);
				break;
			case 7 : 
				printf("Juillet : %d jours \n",tab[i]);
				break;
			case 8 : 
				printf("Aout : %d jours \n",tab[i]);
				break;
			case 9 : 
				printf("Septembre : %d jours \n",tab[i]);
				break;
			case 10 : 
				printf("Octobre : %d jours \n",tab[i]);
				break;
			case 11 : 
				printf("Novembre : %d jours \n",tab[i]);
				break;
			case 12 : 
				printf("Decembre : %d jours \n",tab[i]);
				break;
		}
	}
	
}

void impression_mois(int tab[],int pos){
	int i ;
	for ( i = 1 ; i < 13; i ++){
		if( i == pos){
		switch(i){
			case 1 : 
				printf("Janvier : %d jours \n",tab[i]);
				break;
			case 2 : 
				printf("Fevrier : %d jours \n",tab[i]);
				break;
			case 3 : 
				printf("Mars : %d jours \n",tab[i]);
				break;
			case 4 : 
				printf("Avril : %d jours \n",tab[i]);
				break;
			case 5 : 
				printf("Mai : %d jours \n",tab[i]);
				break;
			case 6 : 
				printf("Juin : %d jours \n",tab[i]);
				break;
			case 7 : 
				printf("Juillet : %d jours \n",tab[i]);
				break;
			case 8 : 
				printf("Aout : %d jours \n",tab[i]);
				break;
			case 9 : 
				printf("Septembre : %d jours \n",tab[i]);
				break;
			case 10 : 
				printf("Octobre : %d jours \n",tab[i]);
				break;
			case 11 : 
				printf("Novembre : %d jours \n",tab[i]);
				break;
			case 12 : 
				printf("Decembre : %d jours \n",tab[i]);
				break;
		}
		break;}
	}
	
}


int main(){
	int iNb_jours[13] , n;
	initialisation(iNb_jours);
	impression(iNb_jours);
	printf("Veuillez saisir le mois souhaite : ");
	scanf("%d",&n);
	impression_mois(iNb_jours,n);

return 0 ;}*/


/*Exercice_4 : 

int longueur_chaine1(char tab[]){
	int i = 0; 
	while (tab[i] != '\0'){
		i++;
	}
	return i ;
}

int main (){
	char cTab1 [20], cTab2 [20];
	
	printf("Veuillez saisir la chaine de caractere du tableau cTab1 : ");
	scanf("%s",cTab1);
	printf("Veuillez saisir la chaine de caractere du tableau cTab2 : ");
	scanf("%s",cTab2);
	printf("Le nombre de caractere de la chaine du tableau cTab1 est : %d\n",longueur_chaine1(cTab1));
	printf("Le nombre de caractere de la chaine du tableau cTab2 est : %d\n",longueur_chaine1(cTab2));
	
return 0 ;}*/

/*Exercice_5 :
void crypte(char *cMsg){
int i;
Compte rendu des TP
Structure de données et programmation avancée en C Page 15
for(i=0; i<strlen(cMsg); i++)
if( (cMsg[i]>=65 && cMsg[i]<=90) || (cMsg[i]>=97 && cMsg[i]<=122) ) cMsg[i]+=5;
puts(cMsg);
}
int main(){
char C[20];
char choix;
do{
printf("Donner la chaine de caractere a crypter: ");
scanf(" %s",C);
printf("Votre chaine de caractere avant le cryptage est: %s\n",C);
printf("Votre chaine de caractere apres le cryptage est: ");
crypte(C);
printf("Voulez-vous continuer:\nO: Oui\t N: Non\n ");
scanf(" %c",&choix);
}while(choix==79);
}*/



/*Exercice_6 : 
int main(){
const int Max=100;
int i,n;
int cmpEsp, cmpChif, cmpAut;
char T[Max];
cmpEsp = cmpChif = cmpAut = 0;
printf("Sasir un chaine de caractere: ");
gets(T);
n=strlen(T);
for(i=0;i<n;i++){
if(T[i] == ' ' || T[i] == '\n' || T[i] == '\t') cmpEsp++;
else if((T[i] >=65 && T[i] <=90) || (T[i] >=97 && T[i] <=122) ) cmpChif++;
else cmpAut++;
}
printf("Nombres des espaces, des tabulations et des retours a la ligne est: %d\n",cmpEsp);
printf("Nombres des chiffres est: %d\n",cmpChif);
printf("Nombres des autres caracteres est: %d",cmpAut);
}*/

/*Exercice_7 :

int addition ( int a , int b ){
	return a + b ;
}

int soustraction ( int a , int b ){
	return a - b ;
}

int multiplication ( int a , int b ){
	return a * b ;
}

int division ( int a , int b ){
	return a / b ;
}

int modulo ( int a , int b ){
	return a % b ;
}



int main (){
	int choix , a , b ;
	char op ; 
	do {
		printf("Exemple : a operation b \n");
		printf("Veuillez saisir comme le format si dessus : \n");
		scanf("%d %c%d",&a,&op,&b);
		switch(op){
			case '+':
				printf("%d + %d  = %d \n",a,b,addition(a,b));
				break;
			case '-':
				printf("%d - %d  = %d \n",a,b,soustraction(a,b));
				break;
			case 'x':
				printf("%d x %d  = %d \n",a,b,multiplication(a,b));
				break;
			case '/':
				if(b != 0){
				printf("%d / %d  = %d \n",a,b,division(a,b));}
				else{
					printf("Division par 0 impossible\n");
				}
				break;
			case '%':
				printf("%d modulo %d  = %d \n",a,b,modulo(a,b));
				break;
			default :
				printf("Operateur saisi non pris en compte !\n");
		}
	//	do{
		printf("1.Saisir O pour recommencer\n2.Saisir N pour quitter\n");
		printf("Veuillez faire un choix : ");
		scanf(" %c",&choix);//}while (choix != 'O' || choix != 'o' || choix != 'N' || choix != 'n' );
		
		
		}while (choix == 'O' || choix == 'o');
	
return 0 ;}*/


/*Exercice_8 :
int lecture(char* nom){
 printf("Donnez un nom (Entrez fin si vous avez terminer) : ");
 scanf("%s", nom);
 return strlen(nom);
}
int comparaison(char* s,char* t){
 return strcmp(s,t);
}
int main(){
 char nom[20];
 int nomlen,cmp=0;
 do{
 int nomlen = lecture(nom);
 if(nomlen>10){
 cmp++;
 }
 }while(comparaison(nom,"fin") != 0);
 printf("\nLe nombre de mots dont une taille plus de 10 est : %d",cmp);
}*/

/*Exercice 9: 

int menu() {
	int choix ;
	printf("Menu operations sur chaine");
	printf("\n-------------------------\n");
	printf("1.Saisir une chaine de caractere\n2.Afficher une chaine de caractere\n3.Inverser une chaine de caractere\\n");
	printf("\n-------------------------\n");
	printf("Veuillez choisir une option ; ");
	scanf("%d",&choix);
	return choix ;
}


void saisir_chaine(char chaine []){
printf("Veuillez saisir une chaine de caractere : ");
scanf("%s",chaine);
	
}

void afficher_chaine(char chaine[]){
	printf("La chaine de caractere est : %s\n",chaine);
	
}

void inverser_chaine(char chaine[]){
	chaine = strrev(chaine);
}


int main (){
	char chaine [20];
	switch (menu()){
		case 1 :
			saisir_chaine(chaine);
			break;
		case 2 :
			afficher_chaine(chaine);
			break;
		case 3 :
			inverser_chaine(chaine);
			break;
		default : 
			printf("Choix non disponible\n");
		 
	}
	 
	
	
	
	
	
return 0 ;}*/

/*Exercice_10 :

void distanceH(char s1 [], char s2 [],int n){
	int i, occ = 0 ;
	for ( i = 0 ; i < n ; i ++ ){
		if (s1[i]!=s2[i]){
			occ++;
		}
	}
	printf("La distance de Hamming entre %s et %s est : %d\n",s1,s2,occ);
}
void binaire(int bin[], int n){
	int reste, cpt = 0, i ;
	for(i = 0 ; i < 8 ; i++ ){
		reste = n % 2 ;
		bin [7-i] = reste;
		n /= 2 ;			
	}
}


void distanceNombre(int nb1, int nb2){
	int a [8], b[8], i, cpt = 0 ;
	
	 binaire(a,nb1);
	 binaire(b,nb2);
	 for( i = 0 ; i < 8 ; i++ ){
	 	printf("[%d]\t",a[i]);
	 }
	 printf("\n");
	 for( i = 0 ; i < 8 ; i++ ){
	 	printf("[%d]\t",b[i]);
	 }
	 printf("\n");
	for (i = 0 ; i < 8 ; i++){
			if( a[i] != b[i]){
				cpt ++ ;
			}
	}
	printf("La distance de hamming entre %d et %d est : %d \n",nb1,nb2,cpt);
}


int main () {
	int a, b ;
	char s1 [20], s2[20] ;
	printf("Veuillez saisir la chaine 1 : ");
	scanf("%s",s1);
	printf("Veuillez saisir la chaine 1 : ");
	scanf("%s",s2);
	distanceH(s1,s2,6);
	printf("Veuillez saisir le chiffre 1 : ");
	scanf("%d",&a);
	printf("Veuillez saisir le chiffre 2 : ");
	scanf("%d",&b);
	distanceNombre(a,b);

return 0 ;}*/

