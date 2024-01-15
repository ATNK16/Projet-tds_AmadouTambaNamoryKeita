#include <stdio.h>
#include <string.h>
#include<stdlib.h>

//Structure permettant de noter la presence 
typedef struct {
	int seance ;
	int presence ;
}abscence;
//Structure permettant de definir 
typedef struct {
	char module [20] ;
	abscence ab[5] ;
}presences;

typedef struct {
	char module [20] ;
	float controle ;
	float exam ;
}notes;

typedef struct {
	char nom [20] ;
	char numero_i [20];
	char mot_de_passe[5];
	notes n[3] ;
	presences p[3] ;
}Etudiant;


// Toutes les fonctions concernants les autentifications que se soit admin ou etudiant 


//Autentification_administrateur
int autentification_a(){
	int i , mot_de_passe ;
	char login[20] ;
	printf("Veuillez saisir le login de l'admin : ");
	scanf("%s",login);
	if (strcmp(login,"admin")==0 ){
			for( i = 0 ; i < 3 ; i++){
			printf("Veuillez saisir le mot de passe de l'admin : ");
			scanf("%d",&mot_de_passe);	
			if(mot_de_passe == 123){
			printf("Bienvenue dans le compte administrateur \n");
			return 1 ;
			}
			else{
			printf("Le mot de passe est incorrect !!\n");
			}
			}
		if (mot_de_passe != 123 ){
			printf("Desole vous avez atteint le nombre maximum de tentatives....\n");
			return 0 ;
		}
		}
		else{
			printf("Le nom saisi ne correspond a aucun administrateur\n");
			return 0 ;
		}
	}
	
//Autentification_etudiant
int autentification_e(Etudiant e[] , char nom [], int n){
	int i ,k, h , pass;
	char mot_de_passe [5], password [5] ;
	char login[20] ;
	printf("Veuillez saisir le login de l'etudiant : ");
	scanf("%s",login);
	strcpy(nom,login);
	for( k = 0 ; k < n ; k++){
	if (strcmp(login,e[k].nom)==0 ){
		printf("%s\n",e[k].mot_de_passe);
			for( i = 0 ; i < 3 ; i++){
			printf("Veuillez saisir le mot de passe de l'etudiant : ");
			scanf("%s",mot_de_passe);
			if(strcmp(mot_de_passe,e[k].mot_de_passe)==0 )
			{
			printf("Bienvenue dans le compte etudiant \n");
			return 1 ;
			}
			else{
			printf("Le mot de passe est incorrect !!\n");
			}
			}
		if (strcmp(mot_de_passe,e[k].mot_de_passe)!= 0  ){
			printf("Desole vous avez atteint le nombre maximum de tentatives....\n");
			return 0 ;
		}
		}
		}
		if(strcmp(login,e[k].nom)!=0 )
		printf("Le nom saisi ne figure pas dans la liste des etudiants \n");
	}
	

//----------------------------------------------------------------------------------------------------------

void ajout_modules(Etudiant e[]){
	int i; 
	for ( i = 0 ; i < 20 ; i ++){
			strcpy(e[i].n[0].module,"Mathematiques");
			strcpy(e[i].n[1].module , "Physique");
			strcpy(e[i].n[2].module , "Informatique");
			strcpy(e[i].p[0].module,"Mathematiques");
			strcpy(e[i].p[1].module , "Physique");
			strcpy(e[i].p[2].module , "Informatique");
	}
	
}
	
// Toutes les fonctions concernants le générateur de mot de passe 


//Générateur de mot de passe 
void generateur (Etudiant e[],int i ){
	strncpy(e[i].mot_de_passe,e[i].nom,3);
	strncat(e[i].mot_de_passe,e[i].numero_i,2);
	//printf("Le mot de passe genere est : %s\n",e[i].mot_de_passe);
	
}

//----------------------------------------------------------------------------------------------------------

// Toutes les fonctions concernants le nom  d'un etudiant 


//Permet de saisir le dossier de n étudiants
void saisie_dossier(Etudiant e[] ,int n){
	int i , j , k  , l , cpt ;
	for(i = 0 ; i < n ; i++){
	printf("Veuillez saisir le nom de l'etudiant %d : ",i+1);
	scanf("%s",&e[i].nom);
	printf("Veuillez saisir le numero d'inscription : ");
	scanf("%s",&e[i].numero_i);
	for( j = 0 ; j < 3 ; j ++ ){
	do{
	printf("Veuillez saisir la note du controle de %s : ",e[i].n[j].module);
	scanf("%f",&e[i].n[j].controle);}while(e[i].n[j].controle < 0 || e[i].n[j].controle > 20);
	do{
	printf("Veuillez saisir la note de l'examen de %s : ",e[i].n[j].module);
	scanf("%f",&e[i].n[j].exam);}while(e[i].n[j].exam < 0 || e[i].n[j].exam > 20);
	}
	l = 0 ;
	for ( k = 0 ; k < 3 ; k ++){
		cpt = 1 ; 
		for( j = 0 ; j < 5 ; j++){
			printf("Noter la presence a la seance %d de %s : ",j+1,e[i].n[l].module);
			e[i].p[k].ab[j].seance = cpt ;
			scanf("%d",&e[i].p[k].ab[j].presence);
			cpt++;
		}
		l++ ;
	}
	system("cls");
	}
	

	}
	
//Permet d'ajouter un ou n dossiers à une liste deja existante 
void ajout_dossier(Etudiant e[] ,int n, int n_actu){
	int i , j , k  , l , cpt ;
	for(i = n ; i < n + n_actu ; i++){
	printf("Veuillez saisir le nom de l'etudiant %d : ",i+1);
	scanf("%s",&e[i].nom);
	printf("Veuillez saisir le numero d'inscription : ");
	scanf("%s",&e[i].numero_i);
	for( j = 0 ; j < 3 ; j ++ ){
	do{
	printf("Veuillez saisir la note du controle de %s : ",e[i].n[j].module);
	scanf("%f",&e[i].n[j].controle);}while(e[i].n[j].controle < 0 || e[i].n[j].controle > 20);
	do{
	printf("Veuillez saisir la note de l'examen de %s : ",e[i].n[j].module);
	scanf("%f",&e[i].n[j].exam);}while(e[i].n[j].exam < 0 || e[i].n[j].exam > 20);
	}
	l = 0 ;
	for ( k = 0 ; k < 3 ; k ++){
		cpt = 1 ; 
		for( j = 0 ; j < 5 ; j++){
			printf("Noter la presence a la seance %d de %s : ",j+1,e[i].n[l].module);
			e[i].p[k].ab[j].seance = cpt ;
			scanf("%d",&e[i].p[k].ab[j].presence);
			cpt++;
		}
		l++ ;
	}
	system("cls");
	}
	

	}


//Affichage du nom d'un etudiant 
void affichage_nom(Etudiant e[], int n){
	int i ; 
	for(i = 0 ; i < n ; i++){
		printf("%d.Nom : %s | N_Inscription : %s\n",i+1,e[i].nom,e[i].numero_i);
	}
}

//Affichage du nom d'un etudiant coté administrateur 
void affichage_nom_admin(Etudiant e[], int n){
	int i ; 
	printf("La liste des etudiants enregistres est :");
	for(i = 0 ; i < n ; i++){
		printf("\n----------------------------------------------------\n");
		printf("%d.Nom : %s | N_Inscription : %s | Password : %s",i+1,e[i].nom,e[i].numero_i,e[i].mot_de_passe);
	}
	printf("\n----------------------------------------------------\n");
}

//----------------------------------------------------------------------------------------------------------
// Toutes les fonctions concernant les Tri


//Fonction permettant de classer les étudiants en fonction de leurs noms
void trier_nom(Etudiant e[], int n){
	int i,j ;
	char** tab;
	char* mot;
	tab=(char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++){
		tab[i]=(char*)malloc(20*sizeof(char));
	}
	for(i=0;i<n;i++){
		strcpy(tab[i],e[i].nom);
	}
	for (i = 0 ; i < n - 1 ; i++){
		for (j = i + 1 ; j < n ; j++ ){
		if (strcmp(tab[i],tab[j])>0){
			mot=tab[i];
			tab[i]=tab[j];
			tab[j]=mot;
		}
		}
	}
	printf("\n---------------------------------------------------------\n");
	printf("La liste des etudiants classes selon leurs noms est : ");
	printf("\n---------------------------------------------------------\n");
	for (i = 0 ; i < n ; i++){
		printf("%d.Nom : %s\n",i+1,tab[i]);
		printf("\n---------------------------------------------------------\n");
	}
	 for (i = 0; i < n; i++) {
        free(tab[i]);
    }
    free(tab);
}

//Fonction permettant de classer les étudiants en fonction de leurs numéro_inscription
void trier_num(Etudiant e[], int n){
	int i,j,k ;
	char** tab;
	char* mot;
	tab=(char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++){
		tab[i]=(char*)malloc(20*sizeof(char));
	}
	for(i=0;i<n;i++){
		strcpy(tab[i],e[i].numero_i);
	}
	for (i = 0 ; i < n - 1 ; i++){
		for (j = i + 1 ; j < n ; j++ ){
		if (strcmp(tab[i],tab[j])>0){
			mot=tab[i];
			tab[i]=tab[j];
			tab[j]=mot;
		}
		}
	}
	printf("\n---------------------------------------------------------\n");
	printf("La liste des etudiants classes selon leurs numero_inscription est : ");
	printf("\n---------------------------------------------------------\n");
	for (i = 0 ; i < n ; i++){
		for(j=0;j<n;j++){
			if(strcmp(e[j].numero_i,tab[i])==0){
				k=j;
				break;
			}
		}
		printf("%d.Nom : %s | N_Inscription : %s \n",i+1,e[k].nom,tab[i]);
		printf("\n---------------------------------------------------------\n");
	}
	 for (i = 0; i < n; i++) {
        free(tab[i]);
    }
    free(tab);
}

//Fonction permettant de classer les étudiants en fonction de leurs moyennes
void trier_moyenne(Etudiant e[],int n){
	float tab[n],f_tab[n], temp;
	float somme ; 
	int i,j; 
	for ( i = 0 ; i < n ; i++){
		somme = 0 ;
		for (j = 0 ; j < 3 ;j++){
		somme += (e[i].n[j].controle + e[i].n[j].exam)/2;
	}
 	tab[i] = somme / 3 ;}
 	for(i = 0 ; i < n ; i++){
 		f_tab[i] = tab[i];
	 }
 	
 	for (i = 0 ; i < n - 1 ; i++){
 		for (j = i + 1 ; j < n ; j++){
 			if( f_tab[i] < f_tab[j]){
 				temp = f_tab[i];
 				f_tab[i] = f_tab[j];
 				f_tab[j] = temp ;
			 }
		 }
	 }
	printf("\n---------------------------------------------------------\n");
	printf("La liste des etudiants classes selon leurs moyennes est : ");
	printf("\n---------------------------------------------------------\n");
	for (i = 0 ; i < n ; i++){
		for(j = 0; j< n ; j++){
			if(f_tab[i] == tab[j]){
		printf("%d.Nom : %s | Moyenne : %.2f\n",i+1,e[j].nom,f_tab[i]);
		printf("\n---------------------------------------------------------\n");}
	}}
	 
	
	
	
}

//----------------------------------------------------------------------------------------------------------
// Toutes les fonctions concernants les notes d'un etudiant

//Fonction qui permet de determiner le rang 
void Rang(Etudiant e[],int n, int pos){
		float tab[n],f_tab[n], temp;
	float somme ; 
	int i,j; 
	for ( i = 0 ; i < n ; i++){
		somme = 0 ;
		for (j = 0 ; j < 3 ;j++){
		somme += (e[i].n[j].controle + e[i].n[j].exam)/2;
	}
 	tab[i] = somme / 3 ;}
 	for(i = 0 ; i < n ; i++){
 		f_tab[i] = tab[i];
	 }
 	
 	for (i = 0 ; i < n - 1 ; i++){
 		for (j = i + 1 ; j < n ; j++){
 			if( f_tab[i] < f_tab[j]){
 				temp = f_tab[i];
 				f_tab[i] = f_tab[j];
 				f_tab[j] = temp ;
			 }
		 }
	 }
	for (i = 0 ; i < n ; i++){
		if(f_tab[i] == tab[pos]){
			printf("\n---------------------------------------------------------\n");
			printf("Nom : %s | Moyenne : %.2f | Rang : %d sur %d\n",e[pos].nom,f_tab[i],i+1,n);
			printf("\n---------------------------------------------------------\n");}
	}
	 
	
	
}

//Affichage des notes d'un etudiant 
void afficher_notes(Etudiant e[], int pos ,int n){
	int i ;
	printf("Pour l'etudiant %s \n",e[pos].nom);
	printf("Les notes des modules sont : \n");
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
	for ( i = 0 ; i < n ; i++ ){
	printf(" Module %s | Control :  %.2f | Examen : %.2f\n",e[pos].n[i].module,e[pos].n[i].controle,e[pos].n[i].exam);
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
	}
}
//Affichage d'une note en particulier 
void afficher_notes_module(Etudiant e[], int pos , char module []){
	int i ;
	printf("Pour l'etudiant %s : \n",e[pos].nom);
	for ( i = 0 ; i < 3 ; i++){
		if (strcmp(e[pos].p[i].module,module)==0){
			//printf("Pour le module %s : \n",e[pos].p[i].module);
			printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
			printf(" Module %s | Control :  %.2f | Examen : %.2f\n",e[pos].n[i].module,e[pos].n[i].controle,e[pos].n[i].exam);
			printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
}
}} 

//Menu note étudiant 
int menu_notes (){
	int choix_n ;
	printf("Menu notes\n---------------------------------------------------\n");
	printf("1.Voir toutes les notes\n2.Voir les notes d'un module particulier\n3.Voir la moyenne generale\n4.Voir le rang occupe\n5.Quitter\n");
	printf("---------------------------------------------------\n");
	printf("Veuillez choisir une option : ");
	scanf("%d",&choix_n);
	return choix_n ; 
}

//Menu note administrateur 
int menu_notes_admin (){
	int choix_n ;
	printf("Menu notes\n---------------------------------------------------\n");
	printf("1.Modifier une note\n2.Quitter\n");
	printf("---------------------------------------------------\n");
	printf("Veuillez choisir une option : ");
	scanf("%d",&choix_n);
	return choix_n ; 
}

//Menu note administrateur 
int menu_trier(){
	int choix ;
	printf("\n---------------------------------------------------\n");
	printf("Menu Trie\n---------------------------------------------------\n");
	printf("1.Trier selon le nom\n2.Trier selon la moyenne\n3.Trier selon l'inscription\n4.Quitter\n");
	printf("\n---------------------------------------------------\n");
	printf("Veuillez choisir une option : ");
	scanf("%d",&choix);
	system("cls");
	return choix ;
}

//Ajout de note niveau administrateur

void ajouter_note(Etudiant e[],int pos , char module[]){
	int i ; 
	for (i = 0 ; i < 3 ; i++ ){
	if(strcmp(e[pos].n[i].module,module)==0){
	printf("Veuillez saisir la nouvelle note de controle de %s : ",module);
	scanf("%f",&e[pos].n[i].controle);
	printf("Veuillez saisir la nouvelle note de l'examen de %s : ",module);
	scanf("%f",&e[pos].n[i].exam);
	}}
	
}

 //Modification de note au niveau de l'administrateur

void modifier_note(Etudiant e[],int pos , char module[]){
	int i ; 
	for( i = 0 ; i < 3 ; i++){
	if(strcmp(e[pos].n[i].module,module)==0){
	do{
	printf("Veuillez saisir la nouvelle note de controle de %s : ",module);
	scanf("%f",&e[pos].n[i].controle);}while(e[pos].n[i].controle < 0 || e[pos].n[i].controle > 20 );
	do{
	printf("Veuillez saisir la nouvelle note de l'examen de %s : ",module);
	scanf("%f",&e[pos].n[i].exam);}while(e[pos].n[i].exam < 0 || e[pos].n[i].exam > 20 );
	}}

}

//Fonction qui permet de calculer la moyenne d'un étudiant
float moyenne_note(Etudiant e[] , int pos){
	float somme = 0  , moyenne ; 
	int i; 
	for ( i = 0 ; i < 3 ; i++){
		somme += (e[pos].n[i].controle + e[pos].n[i].exam)/2;
	}
	moyenne = somme / 3 ;
	return moyenne ;
}

//----------------------------------------------------------------------------------------------------------

// Toutes les fonctions concernant la presence 

//Affichage de la presence dans tous les modules

void afficher_presence (Etudiant e[] , int pos ,int n) {
	int i , j ; 
	printf("Pour l'etudiant %s \n",e[pos].nom);
	for ( i = 0 ; i < n ; i ++){
		printf("Pour le module %s : \n",e[pos].p[i].module);
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		for ( j = 0 ; j < 5 ; j++ ){
			if(e[pos].p[i].ab[j].presence == 1){
			printf("Sceance %d : present | ",e[pos].p[i].ab[j].seance);}
			else {
				printf("Sceance %d : abscent | ",e[pos].p[i].ab[j].seance);}
			}
			printf("\n");
			printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
			printf("\n");
		}
	}

//Affichage de la presence d'un module en particulier 
void afficher_presence_module (Etudiant e[] , int pos ,char module[]) {
	int i , j ; 
	printf("Pour l'etudiant %s \n",e[pos].nom);
	for ( i = 0 ; i < 3 ; i++){
		if (strcmp(e[pos].p[i].module,module)==0){
			printf("Pour le module %s : \n",e[pos].p[i].module);
		for ( j = 0 ; j < 5 ; j++ ){
			if(e[pos].p[i].ab[j].presence == 1){
			printf("Sceance %d : present | ",e[pos].p[i].ab[j].seance);}
			else {
				printf("Sceance %d : abscent | ",e[pos].p[i].ab[j].seance);}}
			printf("\n");
			printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
			printf("\n");
			
			
			
		}
		}
	} 
	
//Preference au niveau de l'affichage de la presence des modules
int menu_presence(){
	int choix ;
	do{
	printf("Menu presence\n---------------------------------------------------\n");
	printf("1.Tout les modules \n2.Un module specifique\n");
	printf("\n---------------------------------------------------\n");
	printf("Veuillez faire un choix : ");
	scanf("%d",&choix);}
	while(choix != 1 && choix != 2);
	return choix ;	
}

//Menu affichant les modules 
int menu_modules (){
	int choix ;
	do{
	printf("1.Mathematiques\n2.Physique\n3.Informatique\n");
	printf("Veuillez preciser le module : ");
	scanf("%d",&choix);}while(choix != 1 && choix != 2 && choix != 3);
	return choix ;
}

//Menu presence administrateur 
int menu_presence_admin (){
	int choix_n ;
	printf("Menu presence\n---------------------------------------------------\n");
	printf("1.Modifier une presence\n2.Quitter\n");
	printf("\n---------------------------------------------------\n");
	printf("Veuillez choisir une option : ");
	scanf("%d",&choix_n);
	return choix_n ; 
}

//Ajout presence au niveau administrateur

void ajouter_presence(Etudiant e[] , int pos , char module[]){
	int i,j,cpt ; 
	for ( i = 0 ; i < 3 ; i++){
	if(strcmp(e[pos].n[i].module,module)==0){ 
		printf("Pour l'etudiant %s \n",e[pos].nom);
		printf("Pour le module %s : \n",e[pos].p[i].module);
		cpt = 1 ;
		for( j = 0 ; j < 5 ; j++){
			printf("Noter la presence a la seance %d : ",j+1);
			e[pos].p[i].ab[j].seance = cpt ;
			scanf("%d",&e[pos].p[i].ab[j].presence);
			cpt++;
		}
}
}}

//----------------------------------------------------------------------------------------------------------

//Fonction qui permet de faire la recherche d'un étudiant
int rechercher_etudiant(Etudiant e[] , int n , char nom []){
	int i , pos  ;
	for ( i = 0 ; i < n ; i ++ ){
		if(strcmp(e[i].nom,nom)==0){
			pos = i ;
			return pos ;
		}
	}
	return -1 ;
}

//Fonction qui supprime un étudiant
int supprimer (Etudiant e[] , int pos, int n){
	int i;
	for (i = pos ; i < n - 1 ; i++){
		e[i] = e[i+1];
	}
	n --;
	return n;
}






//Menu de l'administrateur
int menu_admin (){
	int choix_a ;
	printf("Menu administrateur\n---------------------------------------------------\n");
	printf("1.Remplir la base\n2.Ajouter un dossier\n3.Mettre a jour un dossier\n4.Afficher les etudiants\n5.Trier selon criteres\n6.Supprimer etudiant\n7.Quitter\n");
	printf("---------------------------------------------------\n");
	printf("Veuillez choisir une option : ");
	scanf("%d",&choix_a);
	return choix_a ;
}
//Menu affichage etudiants niveau admin
int menu_aff(){
	int choix ;
	printf("Menu affichage\n---------------------------------------------------\n");
	printf("1.Liste des etudiants\n2.Informations sur un etudiant\n3.Quitter\n");
	printf("---------------------------------------------------\n");
	printf("Veuillez choisir une option : ");
	scanf("%d",&choix);
	system("cls");
	return choix ;
}


//Menu de l'etudiant 
int menu_etudiant (){
	int choix_e ;
	printf("Menu etudiant\n---------------------------------------------------\n");
	printf("1.Voir la liste des etudiants\n2.Voir ses notes\n3.Connaitre sa presence dans les modules\n4.Quitter\n");
	printf("---------------------------------------------------\n");
	printf("Veuillez choisir une option : ");
	scanf("%d",&choix_e);
	return choix_e ;
}

//Menu mise à jour de dossier 

int menu_mise_a_jour (){
	int choix_m ;
	printf("Menu mise a jour\n---------------------------------------------------\n");
	printf("1.Notes \n2.Presence\n3.Quitter\n");
	printf("\n---------------------------------------------------\n");
	printf("Veuillez choisir une option : ");
	scanf("%d",&choix_m);
	return choix_m ;
}


//Menu acces au compte 

int access_compte(){
	int choix ;
	printf("Acces a un compte \n---------------------------------------------------\n");
	printf("1.Compte Administrateur\n2.Compte Etudiant\n");
	printf("---------------------------------------------------\n");
	printf("Veuillez choisir une option : ");
	scanf("%d",&choix);
	return choix ;
}





int main() {
	int option_a ,l,k,u,j, option_e , option_n, n_actu , option_presence , choix , pos ,access , h, n, i, f,poss;
	float moyenne ;
	char module [20] , nom [20], nom_e[20], nom_ee[20];
	Etudiant e [20];
	ajout_modules(e);
	FILE *fichier;
	fichier = fopen("Save.txt","r");
	fscanf(fichier,"%d\n",&n);
	if(fichier != NULL){
	for (f = 0 ;f < n ; f++){
		fscanf(fichier,"%s %s %s\n",&e[f].nom,&e[f].numero_i,&e[f].mot_de_passe);
		for(l = 0 ; l < 3 ; l++){
		fscanf(fichier,"%f %f\n",&e[f].n[l].controle,&e[f].n[l].exam);		
		}
		for (l = 0 ; l < 3 ; l++){
		for (j = 0 ; j < 5 ; j ++){
		fscanf(fichier,"%d %d\n",&e[f].p[l].ab[j].seance,&e[f].p[l].ab[j].presence);
		}	
		}
	}}
	else {
		printf("Aucun fichier de sauvegarde\n");
	}
	fclose(fichier);
	
	do{
	access = access_compte() ;
	system("cls");
	switch(access){
	case 1 : 
	if (autentification_a()==1){
	printf("Autentification reussie\n");
	system("cls");
	do{
	option_a = menu_admin();
	system("cls");
	switch (option_a){
		case 1 : 
		printf("Veuillez donner le nombre d'etudiants : ");
		scanf("%d",&n);
		saisie_dossier(e,n);
		for( i = 0 ; i < n ; i++){
			generateur(e,i);
		}
		
//-----------------------------------------------------
		system("cls");
			break;
		case 2 : 
			printf("Veuillez donner le nombre d'etudiants : ");
			scanf("%d",&n_actu);
			ajout_dossier(e,n,n_actu);
			for( i = n ; i < n + n_actu ; i++){
				generateur(e,i);
			}
			n += n_actu ;
			break;
		case 3 : 
			printf("Veuillez saisir le nom de l'etudiant : ");
			scanf("%s",&nom_e);
			pos = rechercher_etudiant(e,n,nom_e);
			if(pos != -1 ){
			switch(menu_mise_a_jour ()){
				case 1 : 
					switch(menu_notes_admin ()){
						case 1 : 
							printf("1.Mathematiques\n2.Physique\n3.Informatique\n");
							printf("Veuillez saisir un module : ");
							scanf("%d",&choix);
							system("cls");
						switch(choix){
								case 1 :
									strcpy(module,"Mathematiques");
									afficher_notes_module(e,pos,module);
									modifier_note(e,pos,module);
									break;
								case 2 : 
									strcpy(module,"Physique");
									afficher_notes_module(e,pos,module);
									modifier_note(e,pos,module);
									break;
								case 3 : 
									strcpy(module,"Informatique");
									afficher_notes_module(e,pos,module);
									modifier_note(e,pos,module);
									break;
								
							}
							break ;	
						case 2 : 
							break;}
							break;
						
					
				case 2 :
					printf("1.Mathematiques\n2.Physique\n3.Informatique\n");
					printf("Veuillez saisir un module : ");
					scanf("%d",&choix);
					system("cls");
					switch(choix){
								case 1 : 
									strcpy(module,"Mathematiques");
									afficher_presence_module(e,pos,module);
									ajouter_presence(e,pos,module);
									break;
								case 2 : 
									strcpy(module,"Physique");
									afficher_presence_module(e,pos,module);
									ajouter_presence(e,pos,module);
									break;
								case 3 : 
									strcpy(module,"Informatique");
									afficher_presence_module(e,pos,module);
									ajouter_presence(e,pos,module);
									break;
								
							}
							break;					
				case 3 : 
					break; 
						
			}}
			else {
				printf("L'etudiant ne figure pas dans la liste \n");
			}
			break;
		case 4 : 
			
			switch(menu_aff()){
				case 1 :
					affichage_nom_admin(e,n);
					break;
				case 2 : 
					printf("Veuillez saisir le nom de l'etudiant : ");
					scanf("%s",&nom_ee);
					poss = rechercher_etudiant(e,n,nom_ee);
					if(poss != -1 ){
						afficher_notes(e,poss,3);
						afficher_presence(e,poss,3);}
					else{
						printf("L'etudiant ne figure pas dans la liste !\n");
						}
					break;
				case 3 :
					break;
				default: 
					printf("Option inexistante\n");
			}
			
			break;
		case 5 : 
			switch(menu_trier()){
				case 1 :
					trier_nom(e,n);
					break;
				case 2 :
					trier_moyenne(e,n);
					break;
				case 3 : 
					trier_num(e,n);
					break;
				case 4 :
					break;
				default :
					printf("Option inexistante\n");		 
			}
			break;
		case 6 :
			printf("Veuillez saisir le nom de l'etudiant : ");
			scanf("%s",&nom_ee);
			poss = rechercher_etudiant(e,n,nom_ee);
			if(poss != -1){
				n = supprimer(e,poss,n);
				printf("L'etudiant a ete supprime avec succes !\n");
			} 
			else {
				printf("l'etudiant n'existe pas dans la liste\n");
			}
			break;
		case 7 : 
			break;
		default : 
			printf("Option inexistante");
	}
	}while(option_a != 7);}
	
	else {
		printf("Autentificaion echoue\n");
	}break;
	case 2 :
		if(autentification_e(e,nom,n)==1){
		pos = rechercher_etudiant(e,n,nom);
		printf("Votre position est : %d\n",pos);
	do{
	option_e = menu_etudiant();
	system("cls");
	switch (option_e){
		case 1 : 
			printf("Liste des etudiants : \n");
			printf("------------------------------\n");
			affichage_nom(e,n);
			printf("------------------------------\n");
			break;
		case 2 : 
			option_n = menu_notes();
			system("cls");
			switch (option_n){
				case 1 :
					afficher_notes(e,pos,3);
					break ;
				case 2 : 
					switch(menu_modules()){
						case 1 : 
							strcpy(module,"Mathematiques");
							afficher_notes_module(e,pos,module);
							break;
						case 2 :
							strcpy(module,"Physique");
							afficher_notes_module(e,pos,module);
							break;
						case 3 :
							strcpy(module,"Informatique");
							afficher_notes_module(e,pos,module);
							break;
					}
					break;
				case 3 : 
					printf("La moyenne general est : %.2f\n",moyenne_note(e,pos));
					break;
				case 4 :
					Rang(e,n,pos);
					break; 
				
				
			}
			
			break;
		case 3 : 
			option_presence = menu_presence() ;
			if(option_presence == 1){
			afficher_presence(e,pos,3);}
			else if (option_presence == 2){
				choix = menu_modules();
				if(choix==1){
					strcpy(module,"Mathematiques");
					afficher_presence_module(e,pos,module);
				}
				else if(choix==2){
					strcpy(module,"Physique");
					afficher_presence_module(e,pos,module);
				}
				else if(choix==3){
					strcpy(module,"Informatique");
					afficher_presence_module(e,pos,module);
				}	
			}
			break;
		case 4 : 
			break;
		default : 
			printf("option inexistante");}
	}
	while(option_e != 4);}
	else{
		printf("Autentification echouee\n");
	}
	break ;
	}
	printf("Gestion d'access\n---------------------------------------------------\n");
	printf("1.Acceder a un compte\n2.Quitter definitivement \n");
	printf("---------------------------------------------------\n");
	printf("Veuillez choisir un option : ");
	scanf("%d",&h);
	system("cls");}while(h == 1);
	fichier = fopen("Save.txt","w");
		fprintf(fichier,"%d\n",n);
		for(i = 0 ; i < n ; i++){
		fprintf(fichier,"%s %s %s\n",e[i].nom,e[i].numero_i,e[i].mot_de_passe);
		for( j = 0 ; j < 3 ; j ++ ){
		fprintf(fichier,"%f %f\n",e[i].n[j].controle,e[i].n[j].exam);}
		for ( k = 0 ; k < 3 ; k ++){
		for( j = 0 ; j < 5 ; j++){
			fprintf(fichier,"%d %d\n",e[i].p[k].ab[j].seance,e[i].p[k].ab[j].presence);
		}	}
	}
	
	fclose(fichier);
	

	
return 0;}
