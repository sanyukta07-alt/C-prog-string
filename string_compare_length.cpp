// Write a program in C to compare two strings without using string library functions (checking the lengths).

#include <stdio.h>
#include <string.h>

int getLength(char *arr);

int main(void) {
    
    char my_string1[30];
    char my_string2[30];
           
    printf("\nEnter first string: ");
    fgets(my_string1, 30, stdin);
    printf("\nEnter second string: ");
    fgets(my_string2, 30, stdin);
    
    if(getLength(my_string1) == getLength(my_string2))
        printf("\n Strings are EQUAL...");
    else
        printf("\n Strings are NOT EQUAL...");
    
   return 0;
}

int getLength(char *arr)
{
    int count = 0;
    int index = 0;
    
    while(arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}
