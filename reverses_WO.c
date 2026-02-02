//REVERSE OF A STRING WITHOUT USING LIBRARY FUNCTION

#include <stdio.h>

void main()
{
    char name[100];
    int i, j = 0, len = 0;

    printf("Enter a string: ");
    gets(name);
    while(name[j] != '\0')
    {
        len++;
        j++;
    }
    
    printf("The reversed string is: \n");
    for(i = len - 1; i >= 0; i--)
    {
    	printf("%c", name[i]);
	}
    
}


