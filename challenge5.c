#include <stdio.h>
#include <stdlib.h>
struct poiM{
    double x ;
    double y ;
}PoM;
struct poiN{
    double x ;
    double y ;
}PoN;
void calculate( double mx, double my , double nx,double ny){
      // calculate
    double result , mnx , mny ;
    mnx = nx - mx;
    mny = ny - my;
    result = sqrt((mnx * mnx) + (mny * mny));
    printf("The distance is %.2lf", result);
}

int main(){
    printf(" inter the value X1 ; ");
    scanf("%lf",&PoM.x);
     printf(" inter the value Y1 ; ");
    scanf("%lf",&PoM.y);
     printf(" inter the value X2 ; ");
    scanf("%lf",&PoN.x);
     printf(" inter the value Y2 ; ");
    scanf("%lf",&PoN.y);
    calculate( PoM.x , PoM.y , PoN.x , PoN.y );




}
