// Rugile Stundziaite 20268495
// ex 1-1, 1-2
// Exercises
//  ex 1-1. Run the “hello, world” program on your system. Experiment with leaving out parts 
//of the program, to see what error messages you get.
// ex 1 - 2. Experiment  to find out what happens when printf’s argument string contains \c,
//where c is some character not listed above.

#include <stdio.h>


main()	// this is a working code, with variations to the messege
{
	printf("hello world!\n");
	printf("Hello\nWorld!\n");
	printf("Gree\ttings!\n");

	return;

}


// ----------------------------------------------------------------------------------
	// Withoit main(), the error is that the function is missing the header, declaration
	// 
//{
//	printf("hello world!\n");
//	printf("Hello\nWorld!\n");
//	printf("Gree\ttings!\n");
//
//	return;
//
//}


// -------------------------------------------------------------------------------------
// Missing "}" at the end, error is that no match for "{" is found, the code is not closed.
//main()	
//{
//	printf("hello world!\n");
//	printf("Hello\nWorld!\n");
//	printf("Gree\ttings!\n");
//
//	return;
//
