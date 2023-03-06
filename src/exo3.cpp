/*

 Author: Yannis STEFANELLI

 Creation Date: 06-03-2023 14:47:29

 Description :

*/

#include <string>
#include <iostream>

void exo3(std::string sentence) {

    char count = 1; //initializing char variable of max value == 255
                    //starts at 1 because we can't pass empty string

    for (int i = 0; sentence[i] != 0; i++) { //going through sentence
        if (sentence[i] == ' ') //if we encounter a space
            count++; //we passed a word
    }

    printf("nb words : %d", count);
}