#include <stdio.h>
#include <string.h>

int main() { 
    
    float prix[300] ;
    int quantite_stock[300];
    char titre [300][300];
    char auteur[300][300] , livre_recherche[300];
    int c , i;
    int choix;
    int nobre_livre=0;
    choix=1;
	    while(choix!=0){
    	printf("1_____pour ajoute un livre \n");
    	printf("2_____pour afficher tout les livre disponible\n");
    	printf("3_____pour Mettre a jour la quantite d'un livre.\n");
    	printf("4_____pour Supprimer un livre du stock.\n");
    	printf("5_____pour Afficher le nombre total de livres en stock.\n");
	    scanf("%d",&choix);
	
	switch(choix){
		case 1 :{
	//printf("entrer le nombres des live que vous voulez ajoute: ");
    //scanf("%d",&c);
    //for(i=0;i<c;i++) {
    if(nobre_livre>=100){
	printf("imposiible d ajouter un livre");}
	
    printf("entrer le prix de livre: ");
    scanf("%f",&prix[nobre_livre]);
    printf("entrer l'auteur de livre: ");
    scanf("%s",&auteur[nobre_livre]);
    printf("entrer le titre de livre: ");
    scanf("%s",&titre[nobre_livre]);
    printf("entrer la quantite de stock: ");
    scanf("%d",&quantite_stock[nobre_livre]);
    nobre_livre++;
    printf("livre ajouter \n");
    
			break;
	
    case 2 :{
	for(i=0;i<nobre_livre;i++) {
    printf(" le prix de livre est : %f \n",prix[i]);
    printf(" l'auteur de livre est : %s \n",auteur[i]);
    printf(" le titre de livre est : %s\n",titre[i]);
    printf(" la quantite de stock est :%d \n",quantite_stock[i]);
    printf("\n");
    }
    break;
	}
	int new_q, x,indice;
	case 3 :{
		printf("entrer le nom de livre vous vouler: \n");
		scanf("%s",&livre_recherche);
	    printf("entrer la nouvelle quantite");
	    scanf("%d",new_q);  

    for(x=0;x<nobre_livre;x++){
          if(strcmp(titre[x],livre_recherche)==0){
          	indice=x;
		  }
	    quantite_stock[x]=new_q;  
	
	} 
break;
	
	}
	char book_suprimer;
	int i;
	case 4 :{
		if(nobre_livre>0){
			printf("entrer le nom de livre vous vouler supprimer");
		    scanf("%s",book_suprimer);
		for(i=0;i<nobre_livre;i++){
		
		}    
		
		}
		}
		break;
	}
    			
	case 5 :{
		printf("le nombre total de livre en stock est: %d \n",nobre_livre);
		break;
	}		

  return 0;
 }
}}
