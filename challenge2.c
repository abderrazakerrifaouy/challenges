#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f , c ;
    printf(" enter the temperature farenheit ; ");
    scanf("%d",&f);
    c = (f-32)/1.8 ;
    printf(" the temperature celiuce = %d ",c);
    if(c<=12){
        printf("tres froid");
    }else if(c>12 && c<25){
        printf("froid ");
    }else if(c>25 && c<38){
        printf("chaud");
    }else{
        printf("tres chaud");
    }
}
