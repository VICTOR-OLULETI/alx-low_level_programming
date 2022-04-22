#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomPassword(int N)
{
	int i = 0;
	int randomizer = 0;
        char numbers[11] = "0123456789";
	char letter[27] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char password[N];

	srand((unsigned int)(time(NULL)));

	randomizer = rand() % 4;
	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}