//Rugile Stundziaite 20268495
//
// EX 3-2
// Write a function escape(s,t) that converts characters like newline and tab into visible 
//escape sequences like \n and \t as it copies the string t to s.Use a switch.Write a
//function for other direction as well, converting escape sequences into the real
//characters.
//Suppose that  input t[] = “Hello\tworld\nThis is a test.”
//• write escape(s, t) that copies characters from t to s, but converts newline(\n) and
//tab(\t) characters into their respective escape sequences(
//	\\n,
//	• and unescaped(s, t) that convert escape sequences(
//		\\n,
//		\\t)
//	\\t) back into their
//	corresponding special characters(\n, \t)


#include <stdio.h>

void escape(char s[], const char t[]);
void unescape(char s[], const char t[]);


int main()
{
	char t[] = "Hello\tworld\nThis is a test.";
	char escaped[100];
	char unescaped[100];


	escape(escaped, t);
	printf(" Escaped string: %s\n", escaped);

	unescape(unescaped, escaped);
	printf("Unescaped string: %s\n", unescaped);

}


void escape(char s[], const char t[])
{
	int i = 0, j = 0;

	while (t[i] != '\0')
	{
		switch (t[i])
		{
		case '\n':
			s[j++] = '\\';
			s[j++] = 'n';
			break;
		case '\t':
			s[j++] = '\\';
			s[j++] = 't';
			break;
		default:
			s[j++] = t[i];
			break;
		}
		i++;
	}
	s[j] = '\0';
}

void unescape(char s[], const char t[])
{
	int i = 0, j = 0;

	while (t[i] != '\0')
	{
		if (t[i] == '\\' && t[i + 1] != '\0')
		{
			switch (t[i + 1])
			{
			case 'n':
				s[j++] = '\n';
				i++;
				break;
			case 't':
				s[j++] = '\t';
				i++;
				break;
			default:
				s[j++] = t[i];
				break;
			}
		}
		else
		{
			s[j++] = t[i];
		}

		i++;
	}
	s[j] = '\0';
}