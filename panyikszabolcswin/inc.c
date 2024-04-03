#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>

// C-ben érték szerinti átadás történi, mindig ---> másolat készül róla (kivéve a tömböknél), ott referencia szerint. 
void inc(int *a) // <--- pointer , *a AZ A MUTATÓ ÁLTAL MUTATOTT OBJEKTUM.
{
    *a += 1;
}

int main()
{
    int x = 1;

    inc(&x); // <--- memóriacím

    printf("%d\n", x);  // 2-nek kell lennie.

    return 0;
}
