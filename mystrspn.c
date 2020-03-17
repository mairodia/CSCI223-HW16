// =========================================================================
// Programmer: Jennifer King
// Date: 4/17/2018
// Project: MyStrspn
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//      This takes two string arguments as input and returns an int that
//      represents the length of prefix in the first string that consists
//      solely of chars contained in the second string.
// =========================================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrspn(char* str, char* accept);

int main(void)
{
    char str[256];
    char search[256];

    printf("Enter a single string: ");
    fgets(str, 256, stdin);
    str[strcspn(str, "\n")] = 0;

    printf("What do you want to search for?: ");
    fgets(search, 256, stdin);
    search[strcspn(search, "\n")] = 0;

    int values;
    values = mystrspn(str, search);

    printf("strspn(%s, %s) returns %d\n", str, search, values);

    return 0;
}

int mystrspn(char* str, char* accept)
{
    int counter = 0;
    int length1 = strlen(str);
    int length2 = strlen(accept);

    for(int index = 0; index < length1; index++)
    {
        for(int index2 = 0; index2 < length2; index2++)
        {
            if(str[index] == accept[index2])
            {
                counter ++;
            }
        }
        if(counter == 0)
        {
            return counter;
        }
    }
    return counter;
}
