//LENGTH OF A STRING WITHOUT USING LIBRARY FUNCTION

#include <stdio.h>

void main()
{
    char name[100];
    int i = 0, count =0;
    printf("Enter a string: ");
    gets(name);
    while(name[i] != '\0')
    {
        count++;
        i++;
    }
    printf("Length of the string is %d", count);
}

