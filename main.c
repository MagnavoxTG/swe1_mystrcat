#include <stdio.h>

#define src "thisisachainofchars"
#define src2 "thisisanotherchainofchars"

int mystrlen(char *str);

int main() {
    //initiates string
    char str[] = src, str2[] = src2;

    //creates new string with the combined length of the old string and the appendix
    char str3[mystrlen(str)+mystrlen(str2)+1];

    //fills the new string with the contents of the old string
    for (int x = 0;x < mystrlen(str);x++)
        str3[x] = str[x];

    //adds the appendix to the new string
    for (int x = 0;x < mystrlen(str2);x++)
        str3[x+mystrlen(str)] = str2[x];

    //adds the string end symbol
    str3[mystrlen(str)+mystrlen(str2)] = '\0';

    return 0;
}

//finds length of string
int mystrlen(char *str) {
    //initiates count variable
    int count = 0;

    //while its not the end of the string it counts up by on for every character in the string
    while (str[count] != '\0') {
        count++;
    }

    //returns the length of the string
    return count;
}
