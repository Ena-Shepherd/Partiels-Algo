/*

 Author: Yannis STEFANELLI

 Creation Date: 06-03-2023 14:52:21

 Description :

*/

#include <string>
#include <iostream>

void exo4(std::string sentence) {

    char caps = 0;
    char normal = 0;

    for (int i = 0; sentence[i] != 0; i++) { //going through sentence
    
        if (sentence[i] >= 65 && sentence[i] <= 90) { // 65 == 'A', 90 == 'Z'
            caps++;
        } else if (sentence[i] >= 97 && sentence[i] <= 122) { // 97 == 'a', 122 == 'z'
            normal++;
        }
    }

    printf("normal letter : %d, caps letters : %d", normal, caps);
}