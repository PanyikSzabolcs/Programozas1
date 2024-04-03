#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"

int main () {
    // ha nagyobb tömböt adok meg mint amennyi eleme van akkor a többi elemet "0"-val helyettesíti a C. (tömb kinullázása)

    // int tomb[10] = { 0 };
    // int meret = get_int(); // a "get_int()" bekér a felhasználótól egy értéket amekkora legyen a tömb.
    int tomb[10]; // VLA tömb (Variable-Length Array)

    for (int i = 0; i < 10; i++)
    {
        tomb[i] = 0;
    }
    

    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", tomb[i]);
    }
    puts("");

    return 0;
}