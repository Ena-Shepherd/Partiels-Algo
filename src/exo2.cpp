/*

 Author: Yannis STEFANELLI

 Creation Date: 06-03-2023 14:33:50

 Description :

*/

#include <string>
#include <iostream>

bool exo2(std::string sentence) {

    int buffer = 0; //initializing buffer to test for values

    for (int i = 0; sentence[i] != 0; i++) { //going through sentence

        if (buffer > sentence[i]) //if buffer value > ascii value of current letter
            return false; //no alphabetical order

        buffer = sentence[i]; //buffer gets current letter value for next iteration
    }
    return true; //if everything went well, this line executes
}