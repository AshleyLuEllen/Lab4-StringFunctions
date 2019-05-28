/**
 * File:        parsingStr.h
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

#ifndef LAB4REDO_PARSINGSTR_H
#define LAB4REDO_PARSINGSTR_H

#include <iostream>
using namespace std;

/**
 * mostFrequent
 *
 * @param string: the string to be checked for frequency
 * @return char of the character that occurs most frequent
 */
char mostFrequent(char* string);

/**
 * leastFrequent
 *
 * @param string: the string to be checked for frequency
 * @return char of the character that occurs least frequent
 */
char leastFrequent(char* string);

/**
 * moveToEnd
 *
 * @param string: The styring to be altered
 * @param ch: the character from the string passed by reference and to be moved
 */
void moveToEnd(char* string, char* ch);

/**
 * stuGetLine
 *
 * @param stringR: the string to be returned by reference
 * @param string: the string to copy from
 * @param delim: that character that terminates the copy
 * @param capacity: the capacity of stringR
 */
void stuGetLine(char* stringR, const char* string, char delim, int capacity);

#endif //LAB4REDO_PARSINGSTR_H
