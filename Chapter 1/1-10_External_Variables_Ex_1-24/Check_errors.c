// Rugile Stundziaite 20268495
// 
// EX 1-24
// Write a program to check a C program for rudimentary 
// syntax errors like unbalanced parentheses, brackets and braces. 
// Don't forget about quotes, both single and double, escape sequences and comments.

#include <stdio.h>

int main()
{
	int c;

	int paren = 0;
	int brace = 0;
	int bracket = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '(')
			++paren;
		else if (c == ')')
			--paren;

		else if (c == '{')
			++brace;
		else if (c == '}')
			--brace;

		else if (c == '[')
			++bracket;
		else if (c == ']')
			--bracket;
	}

	if (paren == 0)
		printf("Parentheses ok\n");
	else
		printf("Parentheses error\n");

	if (brace == 0)
		printf("Braces ok\n");
	else
		printf("Braces error\n");

	if (bracket == 0)
		printf("Brackets ok\n");
	else
		printf("Brackets error\n");

	return 0;
}

