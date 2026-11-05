// Rugile Stundziaite 20268495
// 1.5 character input and output
// All examples from chapter 1 section 5 is in this file

// copy input to output ; 1st version
main()
{
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}


// copy input to output ; 2nd version
main()
{
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}

// 1.5.2 character counting

#include <stdio.h>


// count characters in input, 1st version

main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}


// count characters in input, 2nd version

main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%0f\n", nc);
}


// count lines in input

main()
{
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n') ++nl;
	printf("%d\n", nl);
}

