/*

 Author: Yannis STEFANELLI

 Creation Date: 06-03-2023 15:31:54

 Description :

*/

#include <string>
#include <iostream>
#include <cstring>
#include <stdlib.h>

int exo10(std::string sentence1, std::string sentence2) {

    int cmpt = 0;

    for (int i = 0; sentence1[i] != 0; i++) {
        if (sentence1[i] != sentence2[i]) //each time the character is different
            cmpt++; //increment difference counter
    }

    return cmpt;
}