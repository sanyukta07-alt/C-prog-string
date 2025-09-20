// Write a program in C to count the total number of vowels or consonants in a string.

#include <stdio.h>
#include <string.h>

int getLength(char *arr);
void toLowerCase(char *arr);
int isMemberOf(char *arr, char ch);

int main(void) {
    
    char my_string[40];
    char ch;
    int index = 0;
    char *vowels = "aeiou";
    char *consonants = "bcdfghjklmnpqrstvwxyz";
    int c_vowels = 0;
    int c_consonants = 0;

    printf("\nEnter any string: ");
    fgets(my_string, 40, stdin);
    
    // converting the accepted string to LOWERCASE
    toLowerCase(my_string);
    
    for(index=0; index<getLength(my_string); index++)
    {
        ch = my_string[index];
        
        // checking if current character is a VOWEL
        if(isMemberOf(vowels, ch))
            c_vowels++;
        
        // checking if current character is a CONSONANT
        else if(isMemberOf(consonants, ch))
            c_consonants++;
    }
    
    printf("\nNo. of Vowels = %d", c_vowels);
    printf("\nNo. of Consonants = %d\n", c_consonants);
    
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

void toLowerCase(char *arr)
{
    int index = 0;
    char ch;
    int ascii = 0;
    
    for(index=0; index<getLength(arr); index++)
    {
        ch = arr[index];
        ascii = (int)ch;
        
        if(ascii>=65 && ascii<=90)
            arr[index] = (char)(ascii + 32);
        else
            arr[index] = ch;
    }
}

int isMemberOf(char *arr, char ch)
{
    int flag = 0;
    int index = 0;
    
    for(index=0; index<getLength(arr); index++)
    {
        if(arr[index] == ch)
        {
            flag = 1;
            break;
        }
    }
    
    return flag;
}
