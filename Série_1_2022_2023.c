//Serie 1 de structures de données 2022-2023
#include <stdio.h>

/*Exercice_1 :
int main (){
	int x , y , choix ;
	printf ("Veuillez saisir le nombre x : ");
	scanf("%d",&x);
	printf ("Veuillez saisir le nombre y : ");
	scanf("%d",&y);
	printf ("1.addition\n2.soustraction\n3.multiplication\n4.division\n");
	printf ("Veuillez saisir l'operation arihmetique : ");
	scanf ("%d",&choix);
	
	if (choix==1)
		printf("%d + %d = %d",x,y,x+y);
	else if (choix==2)
		printf("%d - %d = %d",x,y,x-y);
	else if (choix==4){
		if (y==0) printf("La division par 0 est impossible !");
		else {
		printf("%d / %d = %d",x,y,x/y);}}
	else if (choix==3)
		printf("%d x %d = %d",x,y,x*y);
	else {
		printf ("Choix incorrect !!");
	}
		
	
	
	
return 0;}*/

/*Exercice_2 :
int main (){
	int age ; 
	char sexe ;
	printf ("Veuillez saisir votre age : ");
	scanf ("%d",&age);
	printf ("Veuillez saisir h pour homme ou f pour femme : ");
	scanf (" %c",&sexe);
	if (sexe=='H' || sexe=='h'){
		if (age >= 20){
			printf ("Vous etes imposable !");
		}
		else {
			printf ("Vous n'etes pas imposable'");
		}
	}
	else if (sexe=='F' || sexe=='f'){
		if (age >=18 && age <= 35){
			printf ("Vous etes imposable !");
		}
		else {
			printf ("Vous n'etes pas imposable'");
		}
	}
return 0 ;}*/

/*Exercice_3 : 
int main (){
	int nb_copie ;
	float facture ;
	printf ("Veuillez saisir le nombre de copies : ");
	scanf ("%d",&nb_copie);
	if (nb_copie <= 10){
		facture = nb_copie * 1 ;
	}
	
	else if (nb_copie <= 30){
		facture = 10 * 1 + (nb_copie - 10) * 0.6 ;
	}
	
	else {
		facture = 10 * 1 + 20 * 0.6 + (nb_copie - 30) * 0.4 ;
	}
	
	printf ("les %d copies vous couteront %.2f dh",nb_copie,facture);
	
return 0 ;}*/

/*Exercice_4 :
int main (){
	float prix_initial , prix_final , remise ;
	do {
	printf ("Veuillez saisir le prix du produit : ");
	scanf ("%f",&prix_initial);}while (prix_initial <= 0);
	if (prix_initial < 100){
		remise = prix_initial * 0.3 ;
		prix_final = prix_initial - remise ;
	}
	else if ( prix_initial >= 100 && prix_initial <= 200){
		remise = prix_initial * 0.4 ;
		prix_final = prix_initial - remise ;
	}
	else {
		remise = prix_initial * 0.5 ;
		prix_final = prix_initial - remise ;
	}
	printf("Prix initiale : %.2f DH , Remise : %.2f DH , Prix final : %.2f DH ",prix_initial,remise,prix_final);
return 0 ;}*/

/*Exercice_5 :
int main (){
	int nombre , i , cpt = 0 ;
	do {
	printf ("Veuillez saisir le nombre : ");
	scanf("%d",&nombre);}while (nombre <= 0);
	for (i=2;i< (nombre/2) ; i++){
		if (nombre % i ==0) cpt++;
	}
	if (cpt != 0){
		printf ("Le nombre saisi n'est pas premier ");
	}
	else {
		printf ("Le nombre saisi est premier ");
	}
	
	
	
return 0 ;}*/

/*Exercice_6 : 
int main (){
	int nombre , i ;
	do{
	printf ("Veuillez saisir le nombre : ");
	scanf ("%d",&nombre);}while (nombre <=0);
	if (nombre % 2 == 0 ){
		if (nombre ==2 ){
			printf ("Il n'y a pas de nombre pair inferieur a 2 !");
		}
		else {
		printf ("Les nombres pairs inferieurs a %d sont :  ",nombre);
		for (i=nombre - 2 ; i > 0 ; i-=2){
			
			printf ("%d\t",i);}
		}}

	else {
		printf ("Le nombre saisi est impair !");
	}

return 0 ;}*/

/*Exercice_7 : 
int main (){

	int nombre ,i ;
	printf ("Question 1)\n");
	for (i = 0 ; i <= 20 ; i++){
		printf ("Veuillez saisir le nombre %d : ",i+1);
		scanf("%d",&nombre);
		if (nombre % 2 == 0)
			printf ("le carre de %d est : %d\n",nombre,nombre * nombre);
	}
	
	int compteur = 0 , c_pair = 0 ;
	printf ("Question 2)\n");
	
	do {
		printf ("Veuillez saisir le nombre %d : ",i+1);
		scanf("%d",&nombre);
		compteur ++ ;
		
		if (nombre % 2 == 0){
			printf ("Le carre de %d est : %d",nombre,nombre * nombre);
			c_pair ++ ;
		}
	}while (nombre != 100);
	printf ("Le nombre total d'entrees est : %d \nLe nombre d'entrees pairs est : %d ",compteur);
	
return 0;}*/

/*Exercice_8 :
int main (){
	int i , j , nombre ;
	
	printf ("Question a)\n");
	printf ("Veuillez saisir un nombre : ");
	scanf ("%d",&nombre);
	
	for (i = nombre ; i > 0 ; i -- ){
		for ( j = i ; j > 0 ; j --){
			printf ("%d",j);
		}
		printf ("\n");
	}
	
	printf ("Question b)\n");
	
	for ( i = 0 ; i < 10  ; i ++ ){
		for ( j = 10 - i  ; j > 0 ; j -- ){
			printf("%d",i);
		}
		printf("\n");
		for (j = i ; j >= 0 ; j -- )
		printf (" ");
	}
	
return 0 ;}*/

/*Exercice_9 : 

int main (){
	int nombre_t ,min_act , min_v_positif , somme , somme_v_positif , val , cpt ;
	
	
	somme = somme_v_positif = nombre_t = cpt = 0 ;
		
	do{
		printf("Veuillez saisir un nombre : ");
		scanf("%d",&val);
		if(nombre_t == 0) min_act = val ;
		nombre_t++;
		//Si la valeur est differente de 999 on rentre 
		if (val != 999){
			//Ajout de val a la somme des vals
			somme += val ;
			//Comparaison de la val avec le minimum actuel 
			if(min_act > val ){
				 min_act = val ;
			}
			//Si la val est > 0 on rentre dans la partie min_p et somme_p
			if (val > 0){
				somme_v_positif += val ;
				if(cpt==0){
					min_v_positif = val ;
					cpt++;
				}
				if (min_v_positif > val ){
					min_v_positif = val ;
				}
			}
		}
		
	}while(val != 999);
	nombre_t -- ;
	if (nombre_t == 0){
		printf("La premiere valeur sasie correspond a la valeur d'arret !! ");
	}
	else if(somme_v_positif == 0 ) {
		printf("Le nombre total de valeurs de la suite : %d\n",nombre_t);
		printf("La somme des valeurs lues : %d\n",somme);
		printf("Le minimum est : %d\n",min_act);
		printf("La somme des valeurs strictement positives est : %d\n",somme_v_positif);
		printf("Il n'y a pas de minimum positif car aucune valeur positive n'a ete saisie !");
	}
	
	else {
		printf("Le nombre total de valeurs de la suite : %d\n",nombre_t);
		printf("La somme des valeurs lues : %d\n",somme);
		printf("Le minimum est : %d\n",min_act);
		printf("La somme des valeurs strictement positives est : %d\n",somme_v_positif);
		printf("Le minimum des valeurs strictement positives est : %d\n",min_v_positif);
	}
return 0 ;}*/

/*Exercice_10 :
int main(){
int i,k,n;
printf("Saisir le nombre des lignes: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(k=1;k<2*n;k++){
if(k==n-(i-1)|| k==n+(i-1)|| i==n)printf("*");
else printf(" ");
}
printf("\n");
}
}*/

/*Exercice_11 : 
int main(){
	int val  , choix ;
	
	val = 0 ;
	
	do { 
		printf("Veuillez choisir :\n");
		printf("1. Ajouter 2 \n2. Multiplier par 3 \n3. Soustraire 5 \n4. Quitter\n ");
		printf("Veuillez saisir votre choix : ");
		scanf("%d",&choix);
		
		switch(choix) {
			case 1 : 
					val += 2 ;
					printf("----------------------\n");
					printf("la nouvelle valeur est : %d\n",val);
					printf("----------------------\n");
					break;
			case 2 : 
					val *= 3 ;
					printf("----------------------\n");
					printf("la nouvelle valeur est : %d\n",val);
					printf("----------------------\n");
					break;
			case 3 : 
					val -= 5 ;
					printf("----------------------\n");
					printf("la nouvelle valeur est : %d\n",val);
					printf("----------------------\n");
					break;
			case 4 : 
					break ;
			default : 
					printf("Veuillez saisir une valeur entre 1 et 3 !!\n");
		}
	
	}while (choix != 4);
	
return 0 ;}*/

/*Exercice_12 :
int main(){
int i=1,k,n ;
printf("Saisir la taille: ");
scanf("%d",&n);
while(i<=n){
for(k=1;k<=n;k++){
if((i==1 || i==n) || (k==1 || k==n))printf("* ");
else if(k==i ||k==n-i+1 )printf("+ ");
else if(i==(n/2)+1)printf("| ");
else if (k==(n/2)+1)printf("- ");
else printf(" ");
}
printf("\n");
i++;
}
}*/


