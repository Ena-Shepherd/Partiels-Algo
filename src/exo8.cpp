/*

 Author: Yannis STEFANELLI

 Creation Date: 06-03-2023 15:24:38

 Description :

*/

#include <stdio.h>

void exo8(int x) {

    for (int i = 1; i <= x; i++) { //stopping at x
        if (i % 2 == 0) //if pair
            printf("%d", i);
    }
}