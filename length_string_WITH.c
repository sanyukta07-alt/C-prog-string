//LENGTH OF A STRING WITH LIBRARY FUNCTION

#include <stdio.h>
#include <string.h>

void main()
{
    char name[50];
    int len = 0;
    printf("Enter a string: ");
    gets(name);
    len = strlen(name);
    printf("The length of the string is: %d", len );
}

