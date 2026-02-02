//input a string from the user and display it

#include <stdio.h>

void main()
{
    char name[50];
    printf("Enter a string: ");
    gets(name);
    printf("The string is: ");
    puts(name);
}


/* 2ND METHOD
#include <stdio.h>

void main()
{
    char name[50];
    printf("Enter a string: ");
    gets(name);
    printf("The string is: " "%s", name);
}
*/
