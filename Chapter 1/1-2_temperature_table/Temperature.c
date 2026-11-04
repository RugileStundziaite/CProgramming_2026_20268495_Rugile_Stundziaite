
// Rugile Stundziaite 20268495
// ex 1-3, 1-4. 1-5
// ex 1-3. Modify the temperature conversion program to print a heading above the table.
// ex 1 - 4. Write a program to print the corresponding Celsius to Fahrenheit table.
// ex 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degree to 0.


#include <stdio.h>
//
///*print Fahrenheit-Celsisu table
//for fahr = 0, 20, ..., 300*/
//
main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; // lower limit of temperature table
	upper = 300; // upper limit
	step = 20; // step size 

	printf("char\t\t-> %d\n", sizeof(char));
	printf("short\t\t-> %d\n", sizeof(short));
	printf("int\t\t-> %d\n", sizeof(int));
	printf("long\t\t-> %d\n", sizeof(long));
	printf("long long\t\t-> %d\n", sizeof(long long));
	printf("float\t\t-> %d\n", sizeof(float));
	printf("double\t\t-> %d\n", sizeof(double));
	printf("long double\t\t-> %d\n", sizeof(long double));

	printf("Fahrenheit_to_Celsius_Table\n"); //Heading for table Fahrenheit

	fahr = lower;

	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t\%d\n", fahr, celsius);
		fahr = fahr + step;

	}


	printf("Celsius_To_Fahrenheit_Table\n"); // Heading for Celsius Table

	celsius = lower;

	while (celsius <= upper) {
		fahr = (9 * celsius) / 5 + 32;
		printf("%d\t\t%d\n", celsius, fahr);
		celsius = celsius + step;
	}
	

	// The reversed tables, from 300 to 0

	printf("Fahrenheit_to_Celsius_Table_Reversed\n"); // Heading for table Fahrenheit reverse


	fahr = upper;


	while (fahr >= lower) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t\%d\n", fahr, celsius);
		fahr = fahr - step;

	}

	printf("Celsius_To_Fahrenheit_Table_Reverse\n");	// Heading for table Celsius reverse


	celsius = upper;

	while (celsius >= lower) {
		fahr = (9 * celsius) / 5 + 32;
		printf("%d\t\t%d\n", celsius, fahr);
		celsius = celsius - step;
	}


	return 0;

}