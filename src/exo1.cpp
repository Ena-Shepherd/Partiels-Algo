/*

 Author: Yannis STEFANELLI

 Creation Date: 06-03-2023 14:13:15

 Description :

*/

#include <algorithm> 
#include<iostream>
#include<string>

const char* exo1(std::string sentence) {

    std::reverse(sentence.begin(), sentence.end()); 
    std::cout << sentence << std::endl;

    return sentence.c_str();
}