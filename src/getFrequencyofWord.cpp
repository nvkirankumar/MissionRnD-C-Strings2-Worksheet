/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){

	int i = 0, j, len1 = 0, len2 = 0, c1 = 0, count = 0;
	while (str[i] != NULL){
		len1++;
		i++;
	}	i = 0;
	while (word[i] != NULL){
		len2++;
		i++;
	}

	i = 0;
	while (i < len1)
	{
		j = 0;
		c1 = 0;
		while (str[i + j] == word[j] && word[j] != NULL)
		{
			c1++;
			j++;
		}
		if (c1 == len2)
			count++;
		c1 = 0;
		i++;
	}
	return count;
}


int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

