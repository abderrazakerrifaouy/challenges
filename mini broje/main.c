#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct student
{
   char name[30] ;
   char Last_name[30];   
 };
  struct age 
   {
    int year ;
    int month ;
    int day ;
   };
  
   

// void scan(int y ,struct student erey[y],struct age erey2[y] ){
//     for (int  i = 0; i < y ; i++)
//     {
//         printf(" student numeber %d {\n ",i);
//         printf("the nume ;  ");
//         scanf("%s",erey[i].name);
//         printf(" entre the Last name ;  ");
//         scanf("%s",erey[i].Last_name);
//         printf(" enter the year of birth ; ");
//         scanf("%d",&erey2[i].year);
//         printf(" enter the month of birth ; ");
//         scanf("%d",&erey2[i].month);
//         printf(" enter the day of birth ; ");
//         scanf("%d",&erey2[i].day);
//         printf("}");

//     }
    

// }
void PRINT(int y ,struct student erey[y],struct age erey2[y] ){
    for (int  i = 0; i < y ; i++)
    {
        printf(" student numeber %d {\n ",i);
        printf("the nume ; %s \n",erey[i].name);
        printf(" entre the Last name ;  %s\n",erey[i].Last_name);
        printf(" enter the year of birth ; %d \n",erey2[i].year);
        printf(" enter the month of birth ; %d \n",erey2[i].month);
        printf(" enter the day of birth ; %d \n",erey2[i].day);
        printf("}\n");

    }
}
void order(int y, struct student erey[y], struct age erey2[y]) {
    struct student B[y];
    struct age A[y];
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < y - 1; j++) {
            if (erey2[j].year < erey2[j + 1].year ||
                (erey2[j].year == erey2[j + 1].year && erey2[j].month < erey2[j + 1].month) ||
                (erey2[j].year == erey2[j + 1].year && erey2[j].month == erey2[j + 1].month && erey2[j].day < erey2[j + 1].day)) {
                A[j] = erey2[j];
                erey2[j] = erey2[j + 1];
                erey2[j + 1] = A[j];
                B[j] = erey[j];
                erey[j] = erey[j + 1];
                erey[j + 1] = B[j];
            }
        }
    }
    PRINT(y, erey, erey2);
}
// void average(int y, struct student erey[y], struct age erey2[y]){
    
// }

int main(){
    int x ;
    printf("enter the numeber the student ; ");
    scanf("%d",&x);
    struct student erey[x];
    struct age erey2[x];
    scan(x,erey,erey2);
    PRINT(x,erey,erey2);
    printf("\n *************** order ***********");
    order(x,erey,erey2);
}




