/*

 Author: Yannis STEFANELLI

 Creation Date: 06-03-2023 14:59:34

 Description :

*/

#include <string>
#include <iostream>

void exo5(std::string sentence) {

    char *new_sentence = (char *)malloc(100); //allocating 100 bytes of memory, ideal would be to allocate on strlen()
    int k = 0;

    for (int i = 0; sentence[i] != 0; i++) { //going through sentence
        if (sentence[i] != '@' && sentence[i] != '!' && sentence[i] != '&' && sentence[i] != '?' && sentence[i] != '-' && sentence[i] != '_' && sentence[i] != '#' && sentence[i] != ';') { //if each exception in passed
            new_sentence[k] = sentence[i];
            k++;
        }
    }

    printf("%s", new_sentence);
}