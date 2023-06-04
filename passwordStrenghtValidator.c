#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 18

int containsUppercaseLetter(char *);
int containsLowercaseLetter(char *);
int containsOneNumber(char *);
int containsSequenceLetters(char *);
int containsNonAlphabetic(char *);

int main(void)
{
	char password[MAX];

	printf("Enter your password: ");
	scanf("%s", password);
	
	int containsUpper = containsUppercaseLetter(password);
	int containsLower = containsLowercaseLetter(password);
	int containsNumber = containsOneNumber(password);
	int containsSequenceOfLetters = containsSequenceLetters(password);
	int containsNonAlphabeticChars = containsNonAlphabetic(password);
	int isLenghtValid = strlen(password) >= 8 && strlen(password) <= 16;

	int isPasswordValid = containsUpper && containsLower && containsNumber && !containsSequenceOfLetters && !containsNonAlphabeticChars && isLenghtValid;

	if (isPasswordValid) 
	{
		puts("\nThe provided password is valid");
	}
	else
	{
		puts("\nThe provided password is not valid");
	} 

	return 0;
}

int containsUppercaseLetter(char *password)
{
	int contains = 0;

	for (int counter = 0; counter < strlen(password); counter++) 
	{
		if (isupper(password[counter])) 
		{
			contains = 1;
			break;
		}
	}

	return contains;
}

int containsLowercaseLetter(char *password)
{
	int contains = 0;

	for (int counter = 0; counter < strlen(password); counter++)
	{
		if (islower(password[counter]))
		{
			contains = 1;
			break;
		}
	}
	
	return contains;
}

int containsOneNumber(char *password)
{
	int contains = 0;

	for (int counter = 0; counter < strlen(password); counter++)
	{
		if (isdigit(password[counter]))
		{
			contains = 1;
			break;
		}
	}

	return contains;
}


int containsSequenceLetters(char *password)
{
	int contains = 0, previousVar = 0;

	for (int counter = 0; counter < strlen(password); counter++) 
	{
		int currentVar = password[counter] - '\0';
		int isCurrentVarNextAfterPrevious = (previousVar + 1) == currentVar;

		if (counter != 0 && isCurrentVarNextAfterPrevious)
		{
			contains = 1;
			break;
		} 

		previousVar = currentVar;
	}

	return contains;
}

int containsNonAlphabetic(char *password)
{
	int contains = 0;

	for (int counter = 0; counter < strlen(password); counter++)
	{
		int isValid = !ispunct(password[counter]) && isascii(password[counter]) && !isspace(password[counter]);
		
		if (!isValid)
		{
			contains = 1;
			break;
		} 
	}

	return contains;
}
