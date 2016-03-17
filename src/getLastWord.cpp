/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

int is_alpha_num(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'a' && ch <= 'z'))
		return 1;
	else
		return 0;
}
char * get_last_word(char * str){
	if (str == NULL)
		return NULL;

	int i, space_index = 0, space_index1 = 0, len;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32 && is_alpha_num(str[i + 1]))
		{
			space_index = i + 1;
		}
	}
	len = i;
	
	char *word = (char *)malloc(sizeof(char)*(i - space_index + 1));

	if (is_alpha_num(str[space_index]))
	{
		for (i = space_index; str[i] != '\0'; i++)
		{
			if (str[i] != 32)
			{
				word[space_index1] = str[i];
				space_index1++;
			}

		}
		word[len - (i - space_index1)] = NULL;
	}
	else
		word[space_index] = NULL;

	return word;
}