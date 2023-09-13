#include <stdio.h>
#include <math.h>
int main () {

    double mx, my , nx , ny , result ,mnx ,mny ;

    printf("Enter coordinates x1 ");
    scanf("%lf",&mx);
    printf("Enter coordinates y1 ");
    scanf("%lf", &my);
     printf("Enter coordinates x2 ");
    scanf("%lf", &nx);
    printf("Enter coordinates x1 ");
    scanf("%lf", &ny);


    mnx = nx - mx;
    mny = ny - my;
    result = sqrt((mnx * mnx) + (mny * mny));


    printf("The distance is %.2lf", result);
}
