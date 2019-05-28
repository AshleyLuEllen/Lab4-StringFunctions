/**
 * File:        parsingStr.cpp
 * Author:      Ashley Lu Couch
 * Assignment:  Lab 4
 * Course:      CSI 1440
 * Due Date:    2/13/2019
 *
 * Date Modified: 3/25/2019
 *      -Redid the pages that were missing
 *
 * Date Modified: 2/13/2019
 *      -created
 *
 * This Program is four functions that let a user parse strings
 * The Functions are: mostFrequent(), leastFrequent(),
 *      moveToEnd(), and stuGetLine()
 *
 */

#include "parsingStr.h"

char mostFrequent(char *string) {
    int charCounter[127] = {0};
    int index = 0, indexMost = 0;
    while (string[index] != '\0') {
        ++charCounter[(int) string[index]];
        ++index;
    }

    // go through the printable characters
    for (int i = 33; i < 127; ++i) {
        if(charCounter[i] > charCounter[indexMost]){
            indexMost = i;
        }
    }
    return (char)indexMost;
}

char leastFrequent(char *string) {
    int charCounter[127] = {0};
    charCounter[0] = 100000000;
    int index = 0, indexLeast = 0;
    while (string[index] != '\0') {
        ++charCounter[(int) string[index]];
        ++index;
    }
    // go through the printable characters
    for (int i = 33; i < 127; ++i) {
        if(charCounter[i] < charCounter[indexLeast] && charCounter[i] > 0){
            indexLeast = i;
        }
    }
    return (char)indexLeast;
}

void moveToEnd(char *string, char *ch) {
    int index = 0;
    while (&string[index] != ch && string[index] != '\0'){
        ++index;
    }
    while (string[index + 1] != '\0'){
        swap(string[index], string[index + 1]);
        ++index;
    }
}

void stuGetLine(char *stringR, const char *string, char delim, int capacity) {
    int index = 0;
    while(string[index] != delim && string[index] != '\0' && index+1 < capacity ){
        stringR[index] = string[index];
        ++index;
    }
    stringR[index] = '\0';
}
