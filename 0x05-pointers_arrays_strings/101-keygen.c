#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i = 0;
	int randomizer = 0;
	char letter[27] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char password[5];

	srand((unsigned int)(time(NULL)));

	randomizer = rand() % 2;
	for (i = 0; i < 5; i++)
	{
	        if (randomizer == 1)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 2;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 2;
			printf("%c", password[i]);
		}

	}
	return (0);
}
