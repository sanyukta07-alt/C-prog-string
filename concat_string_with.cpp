//CONCAT TWO STRINGS WITH USING LIBRARY FUNCTIONS

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name1[50];
    char name2[50];
    printf("Enter first string: ");
    gets(name1);
    printf("Enter second string: ");
    gets(name2);
    printf("JOINING TWO STRINGS: ");
    puts(strcat(name1, name2));
}

