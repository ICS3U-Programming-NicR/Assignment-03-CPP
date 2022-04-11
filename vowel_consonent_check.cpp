// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on: April 06 2022
// This program figures out if you can date the grand child

///////////////////////////////////////////////////////////////
// LIBRARIES
///////////////////////////////////////////////////////////////
#include <iostream>
#include <cstring>
///////////////////////////////////////////////////////////////
// STD::SHORTCUTS
///////////////////////////////////////////////////////////////
using std::cout;
using std::cin;


int main() {
    // variables
    std::string userString, letter;
    bool vowel, consonent, space, yLetter, punctuation;
    int index, userStringInt, lengthVar;

    // get input with spaces
    cout << "Enter a string of characters, special"\
    "operators(you can also include punctuation).\n";
    getline(cin, userString);
    lengthVar = userString.length();

    // convert to character
    char userStringChar[lengthVar + 1];
    strcpy(userStringChar, userString.c_str());

    // loops until program is done
    for (index = 0; index < userString.length(); index++) {
        letter = userStringChar[index];

        // sees if int
        try {
            userStringInt = std::stoi(letter);
            cout << "The "<< index + 1 << \
            " character ("<< letter <<") is a number\n";
        }
        catch (std::invalid_argument) {

            // boolean variables will output true or false
            vowel = (letter == "a" || letter == "e" || letter == "i" ||\
            letter == "o" || letter == "u" || letter == "A" || letter == "E" ||\
            letter == "I" || letter == "O" || letter == "U");
            consonent = (letter == "P" || letter == "T" || letter == "R" ||\
            letter == "W" || letter == "Q" || letter == "L" || letter == "K" ||\
            letter == "J" || letter == "H" || letter == "G" || letter == "F" ||\
            letter == "D" || letter == "S" || letter == "M" || letter == "N" ||\
            letter == "B" || letter == "V" || letter == "C" || letter == "X" ||\
            letter == "Z" || letter == "p" || letter == "t" || letter == "r" ||\
            letter == "w" || letter == "q" || letter == "l" || letter == "k" ||\
            letter == "j" || letter == "h" || letter == "g" || letter == "f" ||\
            letter == "d" || letter == "s" || letter == "m" || letter == "n" ||\
            letter == "b" || letter == "v" || letter == "c" || letter == "x" ||\
            letter == "z");
            space = (letter == " ");
            yLetter = (letter == "y" || letter == "Y");
            punctuation = (letter == "," || letter == "." || letter == "?" ||\
            letter == ";" || letter == ":" || letter == "'" || letter == "!" ||\
            letter == ")" || letter == "(" || letter == "\"");

            // logic
            if (vowel == true) {
                cout << "The "<< index + 1 << " character (" << \
                letter <<") is a vowel\n";
            } else if (consonent == true) {
                cout << "The "<< index + 1 << " character (" << \
                letter <<") is a consonent\n";
            } else if (space == true) {
                cout << "The "<< index + 1 << " character (" << \
                letter <<") is a space\n";
            } else if (punctuation == true) {
                cout << "The "<< index + 1 << " character (" << \
                letter <<") is a type of punctuation\n";
            } else if (yLetter == true) {
                cout << "The "<< index + 1 << " character (" << \
                letter <<") is both a vowel and consonent\n";
            } else {
                cout << "The "<< index + 1 << " character (" << \
                letter <<") is a special character\n";
            }
        }
    }
}
