/*

 Author: Yannis STEFANELLI

 Creation Date: 06-03-2023 15:27:25

 Description :

*/

#include "exo1.cpp"

bool exo9(std::string sentence) {
    if (strcmp(sentence.c_str(), exo1(sentence)) == 0) //if reverse and normal sentence are equal
        return true;
    return false;
}