/*
 * This program is made up to scan a string that the user introduces to determine which and how many of the characters
 * are of each possible type of data type by using the functions of the ctype libary within a for cycle and if conditional
 * statements in recursion.
 *
 * Author: Soraya Maqueda
 * Date: 18.10.2108
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char string[250]; //Variable for saving the string
    int digit = 0; //Counter of digit characters
    int alphabet = 0; //Counter of alphanumeric characters
    int vowel = 0; //Counter of vowel characters
    int consonant = 0; //Counter of consonant characters
    int spaces = 0; //Counter of spaces characters
    int special = 0; //Counter of special characters

    //Here I get the string from the user
    printf("Write in here: ");
    fgets(string, sizeof(string), stdin);

    //Cycle to classify each character of the string.
    for (int i = 0; i <  strlen(string); i++) {
        if(isdigit(string[i])){
            digit++;
        }else{
            if(isalpha(toupper(string[i]))){
                alphabet++;
                if(toupper(string[i]) != 'A' && toupper(string[i]) !='E' && toupper(string[i]) !='I'
                && toupper(string[i]) !='O' && toupper(string[i]) !='U'){
                    consonant++;
                } else{
                    vowel++;
                }
            }else{
                if(isspace(string[i])){
                    spaces++;
                }else{
                    if(ispunct(string[i])){
                        special++;
                    }
                }
            }
        }
    }

   printf("In you string:\n");
   printf("%i are digits.\n",digit);
   printf("%i are alphabet, of which %i are vowels and %i are consonants.\n",alphabet, vowel, consonant);
   printf("%i are spaces.\n",spaces);
   printf("%i are special characters.\n", special);

    return 0;
}