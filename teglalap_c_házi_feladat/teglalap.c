#include <stdio.h>

int main()
{
    //feladat: bekérem az a és b oldalt a felhasználótól és ebből meghatározzuk a téglalap kerültét és területét.
    
    int a = 0;
    int b = 0;
    int kerulet = 0;
    int terulet = 0;
    printf("Kérem adja meg a téglalap A oldalának hosszát: ");
    scanf("%d",&a);
    printf("Kérem adja meg a téglalap B oldalának hosszát: ");
    scanf("%d",&b);
    kerulet = 2*a + 2*b;
    terulet = a*b;
    printf("A oldal hossza: %d\nB oldal hossza: %d\nTehát a téglalap kerülete: %d\nA területe pedig: %d\n",a,b,kerulet,terulet);
	
    return 0;
}
