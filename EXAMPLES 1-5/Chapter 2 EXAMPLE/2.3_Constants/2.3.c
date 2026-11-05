
// Rugile Stundziaite 20268495
// 2.3

#include <stdio.h>


#define VTAB '\013'
#define BELL '\007'

#define VTAB '\xb'
#define BELL '\x7'

void main()
{
	printf("Bell sound \\007 %c\n", BELL);
	printf("VTAB \\013 %c\n", VTAB);
	printf("VTAB \\'xb\' %c\n", VTAB);
	printf("Bell sound \\'x7\' %c\n", BELL);

	// test of escape sequences
	printf("%c", 7);
	printf("\a");

}
