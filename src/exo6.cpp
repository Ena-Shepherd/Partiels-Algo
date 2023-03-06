/*

 Author: Yannis STEFANELLI

 Creation Date: 06-03-2023 15:07:52

 Description :

*/

#include <string>
#include <iostream>
#include <cstring>

void exo6(std::string sentence, int nb) {

    char *new_sentence = (char *)malloc(strlen(sentence.c_str()) * nb); //allocating nb times sentence length

    for (int i = 0; sentence[i] != 0; i++) { //going through sentence
        for (int k = 0; k != nb; k++) {
            new_sentence[k] = sentence[i];
        }
    }
    printf("%s", new_sentence);
}