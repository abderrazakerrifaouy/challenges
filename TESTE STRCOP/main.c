#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Tache {
    int id;
    char titre[30];
    char d[100];
    int execution;
    int statu;
    struct Date {
        int year;
        int month;
        int day;
    } deadline;
};

struct Date ereye3;
struct Tache ereye1[100];
int l = 0;
int m = 0;
int Modifier(int i);
void time() {
    printf("Entrez la date d'aujourd'hui (annee/mois/jour) : ");
    scanf("%d/%d/%d", &ereye3.year, &ereye3.month, &ereye3.day);
}

void teime(int z) {
    for (int i = l - z; i < l; i++) {
        ereye1[i].deadline.year = ereye3.year;
        ereye1[i].deadline.month = ereye3.month;
        ereye1[i].deadline.day = ereye3.day + ereye1[i].execution;
        if (ereye1[i].deadline.day > 30) {
            ereye1[i].deadline.month = ereye1[i].deadline.day / 30 + ereye3.month;
            ereye1[i].deadline.day = ereye1[i].deadline.day % 30;
            if (ereye1[i].deadline.month > 12) {
                ereye1[i].deadline.year = ereye1[i].deadline.month / 12 + ereye3.year;
                ereye1[i].deadline.month = ereye1[i].deadline.month % 12;
            }
        }
    }
}

int scan(int z) {
    int p = 1;
    for (int i = l; i < z + l; i++) {
        ereye1[i].id = 23587 + i;
        printf("Saisissez le titre de la tache : ");
        scanf("%s", ereye1[i].titre);
        ereye1[i].titre[0] = toupper(ereye1[i].titre[0]);
        printf("Saisissez le contenu de la tache : ");
        scanf("%s", ereye1[i].d);
        printf("Deadline  : ");
        scanf("%d", &ereye1[i].execution);
        printf("Statut de la tache : ");
        printf("\n 1. A realiser \n 2. En cours de realisation \n 3. Finalisee  \n");
        printf("Quel est votre choix ? : ");
        scanf("%d", &ereye1[i].statu);
        printf("Inscription reussie");

        printf("\n\n*********************\n\n");
        m++;
    }
    l = m;
    teime(z);
    return 1;
}

int print() {
    for (int i = 0; i < l; i++) {
        printf("|                         La tache numero %d :\n", i + 1);
        printf("|                         ID de la tache : %d\n", ereye1[i].id);
        printf("|                         Titre de la tache : %s\n", ereye1[i].titre);
        printf("|                           Contenu de la tache : %s\n", ereye1[i].d);
        printf("|                           La date de fin de la tache : %d/%d/%d\n", ereye1[i].deadline.year, ereye1[i].deadline.month, ereye1[i].deadline.day);
    switch (ereye1[i].statu)
    {
    case 1:
        printf("|                                Statut de la tache A realiser \n\n\n");
        break;
    case 2:
        printf("|                                Statut de la tache En cours de realisation \n\n\n");
        break;
    case 3:
        printf("|                                Statut de la tache Finalisee  \n\n\n");

    default:
        break;
    }
    }
    return 1;
}

int order() {
    struct Tache B[l];
    struct Date A[l];
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l - 1; j++) {
            if (ereye1[j].deadline.year > ereye1[j + 1].deadline.year ||
                (ereye1[j].deadline.year == ereye1[j + 1].deadline.year && ereye1[j].deadline.month > ereye1[j + 1].deadline.month) ||
                (ereye1[j].deadline.year == ereye1[j + 1].deadline.year && ereye1[j].deadline.month == ereye1[j + 1].deadline.month && ereye1[j].deadline.day > ereye1[j + 1].deadline.day)) {
                A[j] = ereye1[j].deadline;
                ereye1[j].deadline = ereye1[j + 1].deadline;
                ereye1[j + 1].deadline = A[j];
                B[j] = ereye1[j];
                ereye1[j] = ereye1[j + 1];
                ereye1[j + 1] = B[j];
            }
        }
    }
    return 1;
}

int order1() {
    struct Tache B[l];
    struct Date A[l];
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l - 1; j++) {
            if (strcmp(ereye1[j].titre ,ereye1[j+1].titre)>0) {
                A[j] = ereye1[j].deadline;
                ereye1[j].deadline = ereye1[j + 1].deadline;
                ereye1[j + 1].deadline = A[j];
                B[j] = ereye1[j];
                ereye1[j] = ereye1[j + 1];
                ereye1[j + 1] = B[j];
            }
        }
    }
    return 1;
}

int rochereche (){
    int roch ;
    int qr = 0 , a ;
    printf("Saisissez l'ID de la tache : ");
    scanf("%d", &roch);
    do{
    for (int  i = 0; i < l; i++)
    {
        if (roch == ereye1[i].id)
        {
       qr = print();
                printf("                          *************************************************** \n");
                printf("                          |    Vous avez choisi d'ajouter une seule tache   |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |       1. changements                            |    \n");
                printf("                          |       2. Supprimer une tache par identifiant    |    \n");
                printf("                          |       3. Revenir en arriere                     |    \n");
                printf("                          |                                                 |    \n");
                printf("                          ***************************************************    \n\n\n");
                printf("Quel est votre choix ? : ");
                scanf("%d",&a);
                switch (a)
                {
                case 1 :
                   qr = Modifier(i);
                    break;
                case 2 :
                    printf("hello abdrzak");

                default:
                    break;
                }
        }
    }
    }while(qr!=3);
    return 1;
}

int rochereche2(){
    char roch[30]  ;
    int qr=0 , a ;
    printf("Saisissez le titre de la tache : ");
    scanf("%s", roch);
    do{
    for (int  i = 0; i < l; i++)
    {
        if (strcmp(roch, ereye1[i].titre) == 0)
        {
       qr = print();
                printf("                          *************************************************** \n");
                printf("                          |    Vous avez choisi d'ajouter une seule tache   |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |       1. changements                            |    \n");
                printf("                          |       2. Supprimer une tache par identifiant    |    \n");
                printf("                          |       3. Revenir en arriere                     |    \n");
                printf("                          |                                                 |    \n");
                printf("                          ***************************************************    \n\n\n");
                printf("Quel est votre choix ? : ");
                scanf("%d",&a);
                switch (a)
                {
                case 1 :
                   qr = Modifier(i);
                    break;

                default:
                    break;
                }


        }

    }
    }while(qr != 3);
    return 1;
}
int Modifier(int i){
    int a , z ;
    do
    {
                printf("                          *************************************************** \n");
                printf("                          |   Quels sont les changements que vous souhaitez |    \n");
                printf("                          |          effectuer ?                            |    \n");
                printf("                          |       1. Modifier la description d'une tache    |    \n");
                printf("                          |       2. Modifier le statut d'une tache.        |    \n");
                printf("                          |       3. Modifier le deadline d'une tache       |    \n");
                printf("                          |       4. Revenir en arriere                     |    \n");
                printf("                          ***************************************************    \n\n\n");
                printf("Quel est votre choix ? : ");
                scanf("%d",&a);
                switch (a)
                {
                case 1 :
                printf("Ecrivez les nouveaux description ;");
                scanf("%s",ereye1[i].d);
                    break;
                case 2 :
                printf("Ecrivez les nouveaux statut ;");
                printf("\n 1. A realiser \n 2. En cours de realisation \n 3. Finalisee  \n");
                printf("Quel est votre choix ? : ");
                scanf("%d", &ereye1[i].statu);
                break;
                case 3 :
                printf("Deadline  : ");
                scanf("%d",&a);
                if(a>ereye1[i].execution){
                   z = a-ereye1[i].execution;
                   ereye1[i].deadline.day = ereye1[i].deadline.day+z;
                   if (ereye1[i].deadline.day > 30 )
                   {
                    ereye1[i].deadline.month=ereye1[i].deadline.month+(ereye1[i].deadline.day/30) ;
                    ereye1[i].deadline.day = ereye1[i].deadline.day % 30 ;
                    if (ereye1[i].deadline.month > 12)
                    {
                        ereye1[i].deadline.year = ereye1[i].deadline.year + ereye1[i].deadline.month / 12;
                        ereye1[i].deadline.month = ereye1[i].deadline.month % 12 ;
                    }

                   }
                }else if(a<ereye1[i].execution){
                    z = ereye1[i].execution - a ;
                    ereye1[i].deadline.day = ereye1[i].deadline.day - z ;

                }





                break;
                default:
                    break;
                }
    } while (a!=4);
 return a ;
}

int menu() {
    int u = 1, y, w;
    do {
        printf("\n                        |*************************************************|   \n");
        printf("                          |                   Menu                          |   \n");
        printf("                          |                                                 |   \n");
        printf("                          |**************************************************   \n");
        printf("                          |                                                 |   \n");
        printf("                          |       1. Ajouter une tache unique               |   \n");
        printf("                          |       2. Ajouter plusieurs taches               |   \n");
        printf("                          |       3. Trier les taches                       |   \n");
        printf("                          |       4. Changer la date d'aujourd'hui          |   \n");
        printf("                          |       5. Afficher la liste des taches actuelles |   \n");
        printf("                          |       6. Recherche d'une tache specifique       |   \n");
        printf("                          |       7. Statistiques                           |   \n");
        printf("                          |                                                 |   \n");
        printf("                          |*************************************************|   \n\n\n");
        printf("Quel est votre choix ? : ");
        scanf("%d", &y);
        switch (y) {
            case 1: {
                printf("                          *************************************************** \n");
                printf("                          |    Vous avez choisi d'ajouter une seule tache   |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |       1. Confirmer                              |    \n");
                printf("                          |       2. Revenir en arriere                     |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |                                                 |    \n");
                printf("                          ***************************************************    \n\n\n");
                printf("Quel est votre choix ? : ");
                scanf("%d", &w);
                if (w == 1) {
                    u = scan(1);
                    print();
                }
                break;
            }
            case 2: {
                printf("                          ************************************************   \n");
                printf("                          |    Vous avez choisi d'ajouter plusieurs taches  |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |              1. Confirmer                       |    \n");
                printf("                          |              2. Revenir en arriere              |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |                                                 |    \n");
                printf("                          *************************************************  \n\n\n");
                printf("Quel est votre choix ? : ");
                scanf("%d", &w);
                if (w == 1) {
                    printf("Entrez le nombre de taches que vous souhaitez ajouter : ");
                    scanf("%d", &w);
                    u = scan(w);
                }
                break;
            }
            case 3: {
                printf("                          ************************************************   \n");
                printf("                          |        J'ai choisi de trier les taches          |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |           1. trier par ordre alphabetique       |    \n");
                printf("                          |           2.  trier par le temps restant pour   |    \n");
                printf("                          |               terminer la tache                 |    \n");
                printf("                          |           3. Revenir en arriere                 |    \n");
                printf("                          |                                                 |    \n");
                printf("                          *************************************************  \n\n\n");
                  printf("Quel est votre choix ? : ");
                  scanf("%d", &w);
                  if (w == 1)
                  {
                   u = order1();
                  }else if(w == 2){
                   u = order();
                  }
                break;
            }
            case 4: {
                printf("                          *************************************************    \n");
                printf("                          |    Vous avez change la date d'aujourd'hui       |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |       1. Confirmer                              |    \n");
                printf("                          |       2. Revenir en arriere                     |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |                                                 |    \n");
                printf("                          *************************************************    \n\n\n");
                printf("Quel est votre choix ? : ");
                scanf("%d",&w);
                if (w == 1)
                {
                   time();
                }


                break;
            }
            case 5: {
                 printf("                         *************************************************    \n");
                printf("                          |Vous avez affiche la liste des taches actuelles |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |       1. Confirmer                              |    \n");
                printf("                          |       2. Revenir en arriere                     |    \n");
                printf("                          |                                                 |    \n");
                printf("                          |                                                 |    \n");
                printf("                          *************************************************    \n\n\n");
                printf("Quel est votre choix ? : ");
                scanf("%d",&w);
                if (w == 1)
                {
                 u = print();
                }
                break;
            }
            case 6:{
        printf("\n                        |*************************************************|   \n");
        printf("                          |            Menu de recherche                    |   \n");
        printf("                          |                                                 |   \n");
        printf("                          |**************************************************   \n");
        printf("                          |                                                 |   \n");
        printf("                          |       1. La recherche par ID                    |   \n");
        printf("                          |       2. La recherche par titre                 |   \n");
        printf("                          |       3. Revenir en arriere                     |   \n");
        printf("                          |                                                 |   \n");
        printf("                          |*************************************************|   \n\n\n");
        printf("Quel est votre choix ? : ");
        scanf("%d",&w);
        if (w == 1)
                  {
                   u = rochereche();
                  }else if(w == 2){
                   u = rochereche2();
                  }
                break;

            }
        }
    } while (u == 1);
    return 0;
}

int main() {
    time();
    menu();
    return 0;
}
