/**
 * File:        main.cpp
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
 * This file is the main for testing the functions
 */

#include <iostream>
#include "parsingStr.h"

using namespace std;

int main() {
    cout << "Testing of mostFrequent and leastFrequent" << endl;
    char ch1[] = "Hello World!!";
    char ch2[] = "This is a testing string.";
    char ch3[] = "1234567890123456789023458764387567443";
    char ch4[] = "!!@#$%^&*()_+|}[];l./..;'//,,?><L:|";

    cout << "mostFrequent(ch1): " << mostFrequent(ch1) << endl;
    cout << "mostFrequent(ch2): " << mostFrequent(ch2) << endl;
    cout << "mostFrequent(ch3): " << mostFrequent(ch3) << endl;
    cout << "mostFrequent(ch4): " << mostFrequent(ch4) << endl << endl;

    cout << "leastFrequent(ch1): " << leastFrequent(ch1) << endl;
    cout << "leastFrequent(ch2): " << leastFrequent(ch2) << endl;
    cout << "leastFrequent(ch3): " << leastFrequent(ch3) << endl;
    cout << "leastFrequent(ch4): " << leastFrequent(ch4) << endl << endl;

    cout << "Testing of moveToEnd" << endl;
    moveToEnd(ch1, &ch1[9]);
    cout << ch1 << endl;
    moveToEnd(ch1, &ch1[5]);
    cout << ch1 << endl;
    moveToEnd(ch1, &ch1[10]);
    cout << ch1 << endl;
    moveToEnd(ch2, &ch2[1]);
    cout << ch2 << endl;
    moveToEnd(ch2, &ch4[1]);
    cout << ch2 << endl;
    moveToEnd(ch2, &ch2[23]);
    cout << ch2 << endl;
    moveToEnd(ch2, &ch2[25]);
    cout << ch2 << endl << endl;

    cout << "Testing of stuGetLine" << endl;
    char chR1[20];
    char chR2[10];
    char chR2_1[6];
    stuGetLine(chR1, ch1, '!', 20);
    cout << chR1 << endl;
    stuGetLine(chR1, ch1, 'W', 20);
    cout << chR1 << endl;
    stuGetLine(chR2, ch2, 'r', 10);
    cout << chR2 << endl;
    stuGetLine(chR2_1, ch2, 'e', 6);
    cout << chR2_1 << endl;
    return 0;
}