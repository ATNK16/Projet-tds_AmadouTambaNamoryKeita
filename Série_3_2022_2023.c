#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Exercice_1 : 

char * inverse (char * chaine ){
	char * debut , * fin ;
	char inter ;
	debut = chaine ;
	fin = chaine + strlen(chaine);
	while (debut < fin ){
		inter = * debut ;
		* debut = * fin ;
		* fin = inter ;
		debut ++ ;
		fin -- ; 			
	}
	chaine = debut ;
	return chaine ;
}


int main () {
	char * chaine ;
	chaine  = (char*)malloc (30 * sizeof(char));
	printf("Veuillez saisir la chaine de caractere : ");
	scanf("%s",chaine);
	printf("La chaine saisie est : %s \n",chaine);
	chaine = inverse (chaine);
	printf("L'inverse de la chaine saisie est : %s ",chaine);
	
	
return 0 ;} */

/*Exercice_2 : 
int len(char *p){
int cmp=0;
while(*p != '\0'){
cmp++;
p++;
}
return cmp;
}
char *inverse(char *p){
char *n;
int i,j;
n = (char*)malloc(len(p)*sizeof(char));
for(i=len(p), j=0; i>0, j<len(p); i--, j++) *(n+j) = *(p+i-1);
*(n+len(p))='\0';
return n;
}
int main(){
char *a, *b;
a = (char*)malloc(30*sizeof(char));
printf("Donner un nom: ");
gets(a);
b = inverse(a);
if(*a==*b) printf("Le mot saisis est palindrome");
else printf("Le mot saisis n'est pas palindrome");
}*/
/*Exercice_3 :

void saisir (float tab [3][4]){
	int i,j; 
	for ( i = 0 ; i < 3 ; i++){
		for ( j = 0 ; j < 4 ; j++){
			printf("Veuillez saisir la valeur %d de la ligne %d : ",j+1,i+1);
			scanf("%f",&tab[i][j]);
		}
	}
}

float somme_indice (float tab[3][4]){
int i, j ;
float somme ;
	somme = 0 ;
	for ( i = 0 ; i < 3 ; i++ ){
		for ( j = 0 ; j < 4 ; j++){
			somme += tab[i][j];
		}
	}
	return somme;	
}

float somme_pointeur (float tab[3][4]){
	int i,j;
	float somme ;
	somme = 0 ;
	for (i = 0 ; i < 3 ; i++){
	for (j = 0 ; j < 4 ; j++){
			somme ;
		}
		}
	
	return somme;	
}

int main (){
	float tab[3][4], somme ;
	saisir(tab);
	somme = somme_indice ;
	printf("La somme des elements est : %.2f\n",somme);
	somme = somme_pointeur ;
	printf("La somme des elements est : %.2f\n",somme);
	
	
	
return 0;}*/




/*Exercice_4 :
void afficher(int A[3][5]){
for(i=0; i<3; i++){
for(j=0; j<5; j++)
printf("%d\t",A[i][j]);
printf("\n");
}
printf("\n");
}
int main(){
int b[3][5];
int *a=*b;
for(i=0; i<15; *a++ = i++);
afficher(b);
**b=15;
afficher(b);
**(b+1)=16;
afficher(b);
*(b[0]+1)=17;
afficher(b);
*(*b+8)=18;
afficher(b);
*(b[1]+2)=19;
afficher(b);
*(*(b+1)+5)=20;
afficher(b);
*(b[2]+3)=21;
afficher(b);
*(*(b+2)+2)=22;
afficher(b);}*/

/*Exercice_5 : 
int nbr_occ(char *ph, char *mot){
int resultat;
char *p=ph;
while( (p=strstr(p,mot)) != NULL){
resultat++;
p += strlen(mot);
}
return resultat;
}
int main(){
char *ph, *mot;
int resultat;
ph = (char*)malloc(250*sizeof(char));
mot = (char*)malloc(15*sizeof(char));
printf("Donner une phrase: ");
gets(ph);
printf("Donner un mot: ");
gets(mot);
resultat = nbr_occ(ph,mot);
printf("\nLe nombre d'occurence de (%s) dans la phrase est: 
%d",mot,resultat);
}*/

/*Exercice_6 :
char* suprimer_blanc(char *ph, char *p){
while(*p==' ') p++;
return p;
}
int main(){
char *ph;
ph = (char*)malloc(250*sizeof(char));
printf("Donner une phrase: ");
gets(ph);
char *q=ph;
printf("%s",suprimer_blanc(ph,q) );
}*/



/*Exercice_7: 

void saisir (float tab [] , int n ){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("Veuillez saisir la valeur %d : ",i+1);
		scanf("%f",&tab[i]);
	}
	
}
int search (float tab [] , int n , float val){
	int i, pos = -1 ;
	for ( i = 0 ; i < n ; i++ ){
		if (tab[i] == val ){
			pos = i ;
			break;
		}
	}
	
	return pos ;
}

int main (){
	float tab [20],val;
	int n, pos;
	do{
	printf("Veuillez saisir la taille du tableau : ");
	scanf("%d",&n);}while(n<=0);
	saisir(tab,n);
	printf("Veuillez saisir la valeur a rechercher : ");
	scanf("%f",&val);
	pos = search(tab,n,val);
	if (pos != -1){
		printf("La valeur %.2f se trouve a la position : %d\n",val,pos);
	}
	else {
		printf("La valeur %.2f ne se trouve pas dans le tableau \n");
	}
	
return 0 ;}*/

/*Exercice_8 : 

void saisir (int tab [] , int n ){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("Veuillez saisir la valeur %d : ",i+1);
		scanf("%d",&tab[i]);
	}
}

void afficher (int tab[], int n ){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("%d\t",tab[i]);
	}
	printf("\n");
}
	

int compression (int tab [], int ftab [], int n){
	int i = 0, j, k = 0, occ, val, taille = 0;
	while( i < n ){
		val = tab[i];
		occ = 1;
		j = i+1 ;
		while(tab[j] == val && j < n){
			occ++;
			j++;
		}
		if(tab[j] != val){
			taille += 2;
			ftab[k] = occ ;
			k++;
			ftab[k] = val ;
			k++;
			i = j - 1  ;
		}
		else {
			taille += 2;
			ftab[k] = occ ;
			k++;
			ftab[k] = val ;
			k++;
		}
		i++;	
		
	}
	
	return taille ;
}
int main(){
	int tab[20], ftab[40];
	int n, taille;
	do{
	printf("Veuillez saisir la taille du tableau : ");
	scanf("%d",&n);}while(n<=0);
	saisir(tab,n);
	taille = compression(tab,ftab,n);
	afficher(tab,n);
	afficher(ftab,taille);	
return 0 ;}*/






