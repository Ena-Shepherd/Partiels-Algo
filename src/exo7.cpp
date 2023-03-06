/*

 Author: Yannis STEFANELLI

 Creation Date: 06-03-2023 15:17:21

 Description :

*/

#include <stdio.h>

void exo7(int x) {

    if (x % 2 == 0) //if number is pair exit
        return;
    
    for (int i = 1; i <= x; i += 2) { //increment i by 2, since we don't want pair numbers
        printf("%d", i);
    }
}