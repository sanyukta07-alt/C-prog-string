//CONCAT TWO STRINGS WITHOUT USING LIBRARY FUNCTIONS

#include <stdio.h>
#include <string.h>

void main()
{
    char name1[100];
    char name2[100];
    int len1, len2, i, j;
    printf("Enter first string: ");
    gets(name1);
    printf("Enter second string: ");
    gets(name2);
    len1= strlen(name1);
    len2= strlen(name2);
    j = len1 - 1;
    for(i = 0; i < len2; i++)
    {
        name1[++j] = name2[i];
    }
    
    name1[++j]= '\0';
    printf("AFTER JOINING THE TWO STRINGS: ");
    puts(name1);

}

