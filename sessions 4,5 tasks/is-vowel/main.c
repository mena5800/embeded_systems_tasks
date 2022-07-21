#include <stdio.h>
#include <stdlib.h>

int main()
{
    // enter character you want to check
    printf("enter a character\n");
    // variable used to check if it is not a vowel char
    int check = 0;
    // declare a variable character and ask the user for input
    char character;
    scanf("%c",&character);
    // list of vowels chars
    char  vowel[] = {'a','e','u','i','e'};
    // line to get the number of element in array
    int size = sizeof(vowel)/sizeof(char);
    // loop to check the input char is vowel or not
    for (int i=0 ; i<size; i++)
    {
        if(character == vowel[i])
        {
            printf("%c is vowel character",character);
            check = 1;
            break;
        }

    }
    if (check==0)
    {
        printf("%c isn't vowel character",character);
    }
    return 0;


}
