#include<stdio.h>
#include<string.h>
struct contact{
   char nom[100];
   char tele[100];
   char email[100];
};
int main(){
struct contact a[100];
int choix = 0;
int nbr_contact;
       while(choix!=193862){
         printf("1---------pour ajouter un contact \n");
         printf("2---------pour modifier un contact \n");
         printf("3---------pour supprimer un contact \n");
         printf("4---------pour rechercher un contact \n");
         printf("5---------pour afficher tout les contact \n");
         scanf("%d",&choix);
        switch(choix){
             case 1:{
                 printf("entrer le nom de contact: \n");
                 scanf("%s",a[nbr_contact].nom);
                 printf("entrer le tele de contact: \n");
                 scanf("%s",a[nbr_contact].tele);
                 printf("entrer le email de contact: \n");
                 scanf("%s",a[nbr_contact].email);
                 nbr_contact++;
             break;
             }
             case 2:{
                 char contact_modifier[100], tele_modifier[100], email_modifier[100];
                 int i,ind;
             printf("entrer le nom de contact vous voulez modifier: \n");
             scanf("%s",&contact_modifier);
             printf("enter le nouveau tele: \n");
             scanf("%s",&tele_modifier);
             printf("entrer le nouveau email: \n");
             scanf("%s",&email_modifier);
             for(i=0;i<nbr_contact;i++){
                if(strcmp(a[i].nom,contact_modifier)==0){
                   ind = i;
                 strcpy(a[ind].tele,tele_modifier);
                 strcpy(a[ind].email,email_modifier);
                   printf("la modification a etait effectuer. \n");
                  }
             }
             break;
             }
             case 3:{
                char recherche[100];
                int u, j;
                  printf("Entrez le titre du livre a supprimer : ");
            scanf(" %s", recherche);
            for(u=0 ; u<nbr_contact ; u++){
                 if(strcmp(a[u].nom,recherche) == 0) {
                    for(j=u;j<nbr_contact;j++){
                        strcpy(a[j].nom, a[j+1].nom);
                        strcpy (a[j].tele, a[j+1].tele);
                        strcpy (a[j].email, a[j+1].email);
                       }
                     nbr_contact-- ;
                    printf("Livre supprime avec succes.\n");
             }}break;}
             case 4:{
              char recherche[100];
                 int p , indice ;
                 printf("entrer le nom de contact vous voulez rechercher: \n");
                 scanf("%s",&recherche);
                 for(p=0;p<nbr_contact;p++){
                     if(strcmp(a[p].nom,recherche)==0){
                      indice=p;
                      printf("contact a etait trouver. \n");
                      printf("le nom de contact est %s \n",a[indice].nom);
                      printf("le tele de contact est: %s \n",a[indice].tele);
                      printf("l'email de contact est: %s \n",a[indice].email);
                   }
                  } break;
             }
             case 5:{
                int r;
                for(r=0;r<nbr_contact;r++){
                    printf("le contact %d \n",r+1);
                    printf("le nom de contact: %s \n",a[r].nom);
                    printf("le tele de contact: %s \n",a[r].tele);
                    printf("l'email de contact: %s \n",a[r].email);
                    printf("\n");
                }
             break;
             }
              }}}
