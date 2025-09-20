// Write a program in C to count words in a given string.

#include <stdio.h>
#include <string.h>

int main(void) {
    
    char my_string[30];
    int index = 0;
    int numberOfSpaces = 0;
    char ch;
    
    printf("\nEnter any string: ");
    fgets(my_string, 30, stdin);
    
    while(my_string[index] != '\0')
    {
        ch = my_string[index];
        if(ch == ' ')
            numberOfSpaces++;
        
        index++;
    }
    
    printf("\nNo. of words = %d\n", (numberOfSpaces+1));
    
    return 0;
}
