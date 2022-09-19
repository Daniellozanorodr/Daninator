#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int value;
    char question[70];
    struct node *left;
    struct node *right;
}node;
node *nnode(node *, int, char[]);
void corre(node *);
void corre(node *raiz){
    int opc;
    if(raiz==NULL)
    printf("\n");
    while(raiz!=NULL){
        if(raiz->left==NULL&&raiz->right==NULL){
            printf("%s",raiz->question);
            break;
        }
        printf("\n%s",raiz->question);
        printf("\n Si es si tecle 1 , Si es no tecle 0\n");
        scanf("%d", &opc);
        if(opc==0){
            if(raiz->left!=NULL);
            raiz=raiz->left;
        }
        else{
            if(raiz->right!=NULL)
            raiz=raiz->right;
        }
    }
}
int main(){
    printf("Akinator de personajes de star wars\n\n\n");
    printf("Heroes\t\tVillanos\n");
    printf("Luke Skywalker\t\tDarth Vader\n");//1
    printf("Obi-wan Kenobi\t\tDarth Maul\n");//2
    printf("Yoda\t\tDarth Sidius\n");//3
    printf("Han solo\t\tJava de Hutt\n");//4
    printf("Leia Organa\t\tTercera hermana\n");//5
    printf("Grogu\t\tMoff Gideon\n");//6
    printf("Din Djarin\t\tConde Dooku\n");//7
    printf("Padme Amidala\t\tCapitan Phasma\n");//8
    printf("Rey\t\tSnoke\n");//9
    printf("R2-D2\t\tGeneral Grievous\n");//10
    printf("Ben solo\t\tGran inquisidaro\n");//11
    printf("C-3PO\t\tBarriss Offee\n");//12
    printf("Omega\t\tVicealmirante Rampart\n");//13
    printf("Ashoka Tano\t\tAurra Sing\n");//14
    printf("Hera syndula\t\tNute Gunray\n");//15
    printf("Chewbacca\t\tThrawn \n");//16
    node *ar = NULL;
    ar = nnode(ar,2000,"Su personaje es un villano?");
    ar = nnode(ar,2500,"Su Heroe es posterior a la republica?");
    ar = nnode(ar,2750,"Su personaje es femenino?");
    ar = nnode(ar,2250,"Su personaje usa lasers?");
    ar = nnode(ar,2960,"Su personaje es un senador?");
    ar = nnode(ar,2970,"Su personaje es un robot?");
    ar = nnode(ar,2850,"Su personaje es un es piloto?");
    ar = nnode(ar,2971,"Su personaje es Chewbacca?");
    ar = nnode(ar,2969,"Su personaje es ben solo?");
    ar = nnode(ar,2851,"Su personaje es Ashoka Tano?");
    ar = nnode(ar,2849,"Su personaje es Hera syndula?");
    ar = nnode(ar,2600,"Su personaje es un sale una serie?");
    ar = nnode(ar,2550,"Su personaje es un villano?");
    ar = nnode(ar,2610,"Su personaje es un villano?");
    ar = nnode(ar,2551,"Su personaje es Omega?");
    ar = nnode(ar,2549,"Su personaje es Rey?");
    ar = nnode(ar,2611,"Su personaje es C-3PO?");
    ar = nnode(ar,2609,"Su personaje es R2-D2?");
    ar = nnode(ar,2200,"Su personaje es un humano?");
    ar = nnode(ar,2280,"Su personaje sale en la primera trilogia?");
    ar = nnode(ar,2180,"Su personaje es un villano?");
    ar = nnode(ar,2285,"Su personaje es un villano?");
    ar = nnode(ar,2275,"Su personaje es un villano?");
    ar = nnode(ar,2181,"Su personaje es Obi-wan Kenobi?");
    ar = nnode(ar,2179,"Su personaje es Luke Skywalker?");
    ar = nnode(ar,2400,"Su personaje es un villano?");
    ar = nnode(ar,2450,"Su personaje es un villano?");
    ar = nnode(ar,2350,"Su personaje es un villano?");
    ar = nnode(ar,2451,"Su personaje es Padme Amidala?");
    ar = nnode(ar,2499,"Su personaje es Din Djarin?");
    ar = nnode(ar,2351,"Su personaje es Grogu?");
    ar = nnode(ar,2349,"Su personaje es Leia Organa?");
    ar = nnode(ar,1500,"Su villano es posterior a la republica?");
    ar = nnode(ar,1750,"Su personaje es un violento?");
    ar = nnode(ar,1250,"Su villano es masculino");
    ar = nnode(ar,1960,"Su personaje sale en serie animada?");
    ar = nnode(ar,1970,"Su personaje sale en peliculas?");
    ar = nnode(ar,1850,"Su personaje participo en combate?");
    ar = nnode(ar,1971,"Su personaje es Darth Vader?");
    ar = nnode(ar,1969,"Su personaje es Gran inquisidaro?");
    ar = nnode(ar,1851,"Su personaje es Darth Maul?");
    ar = nnode(ar,1849,"Su personaje es Vicealmirante Rampart?");
    ar = nnode(ar,1600,"Su personaje es un villano?");
    ar = nnode(ar,1610,"Su personaje es un general?");
    ar = nnode(ar,1550,"Su personaje es Humano?");
    ar = nnode(ar,1611,"Su personaje es Snoke?");
    ar = nnode(ar,1609,"Su personaje es General Grievous?");
    ar = nnode(ar,1551,"Su personaje es Nute Gunray?");
    ar = nnode(ar,1549,"Su personaje es Thrawn?");
    ar = nnode(ar,1400,"Su villano es femenina?");
    ar = nnode(ar,1450,"Su personaje es un sith?");
    ar = nnode(ar,1350,"Su villano fue jedi?");
    ar = nnode(ar,1451,"Su personaje es Java de Hutt?");
    ar = nnode(ar,1449,"Su personaje es Moff Gideon?");
    ar = nnode(ar,1351,"Su personaje es Aurra Sing?");
    ar = nnode(ar,1349,"Su personaje es Barriss Offee?");
    ar = nnode(ar,1200,"Su villano es masculino?");
    ar = nnode(ar,1280,"Su personaje es un mercenario?");
    ar = nnode(ar,1180,"Su personaje es un emperador?");
    ar = nnode(ar,1281,"Su personaje es la Tercera hermana?");
    ar = nnode(ar,1279,"Su personaje es Capitan Phasma?");
    ar = nnode(ar,1179,"Su personaje es Darth Sidius?");
    corre(ar);
    }
    node * nnode(node *raiz, int value, char question[]){
    node *new, *aux, *previous;
    new=(node*)malloc(sizeof(node));
    if(new!=NULL){
        new->value=value;
        strcpy(new->question,question);
        new->left=NULL;
        new->right=NULL;
        if(raiz==NULL){
            raiz=new;
        }else{
            aux=raiz;
            previous=NULL;
            while(aux!=NULL){
                previous=aux;
                if(value<aux->value)
                aux=aux->left;
                else if(value>aux->value)
                aux=aux->right;
                else{
                    return raiz;
                }
            }
            if(value<previous->value)
            previous->left=new;
            else
            previous->right=new;
        }
    }
    else{
    }
    return raiz;
    }
