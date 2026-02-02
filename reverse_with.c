//DISPLAY THE STRING IN REVERSE ORDER WITH LIBRARY FUNCTION

#include <stdio.h>
#include <string.h>

void main()
{
    char name[100];
    printf("Enter a string: ");
    gets(name);
    printf("The reversed string is: ");
    puts(strrev(name));
}

