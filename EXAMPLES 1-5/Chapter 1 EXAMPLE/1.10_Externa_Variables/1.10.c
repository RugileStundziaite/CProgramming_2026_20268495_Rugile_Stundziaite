// Rugile Stundziaite 20268495
// 1.10 External Variable and Scope

#include <stdio.h>
#define MAXLINE 1000	// maximum input line length

int max;
char line[MAXLINE];
char longest[MAXLINE];
int mgetline(void);

void copy(void);


// print the longest input line; specialized version
int main() {
	int len;				// current line length
	extern int max;				// maximum length seen so far
	extern char longest[];	// longest line saved here
	max = 0;
	while ((len = mgetline()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0)		// there was a line
		printf("%s", longest);
	return 0;
}

// getline: specialized version
int mgetline(void) {
	int c, i;
	extern char line[];
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;

}

// copy: copy 'from' into 'to'; assume to is big enough
void copy(void) {
	int i;
	extern char line[], longest[];
	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;

}

