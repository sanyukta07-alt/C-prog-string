/*Write a C program to count blanks, tabs, and newlines in input text*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char my_string[200] = "Life is full of choices. \n\t\tSome are easy, some are hard. \nWe learn, grow, and move on. \n\tHappiness lies in small things - a smile, a word, a  friend.";
	int c_blanks = 0, c_tabs = 0, c_newlines = 0;
	int index = 0;
	char character;
	
	while(my_string[index] != '\0')
	{
		character = my_string[index];
		
		if(character == ' ')
		c_blanks++;
		
		else if(character == '\t')
		c_tabs++;
		
		else if(character == '\n')
		c_newlines++;
		
		index++;
	}
	
	printf("\nCount of blanks = %d", c_blanks);
	printf("\nCount of tabs = %d", c_tabs);
	printf("\nCount of newlines = %d", c_newlines);
	
	return 0;
}
