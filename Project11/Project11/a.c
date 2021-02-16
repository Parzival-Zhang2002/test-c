#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void printMonth(int, int);
void printMonthTitle(int year, int month);
void printcalendar(int year,int x);
void printMonthBody(int year, int month);
int getStartDay(int year, int month);
int getTotalNumberOfDays(int year, int month);
int getNumberOfDaysInMonth(int year, int month);
int isLeapYear(int year);



void main()
{
	int year;

	printf("Enter full year (e.g., 2001): ");
	scanf("%d", &year);
	int a = 0;
	for (a = 0; a <= 11; a++)
	{

		printcalendar(year, a);
		printMonthBody(year, a + 1);
		
	}
	scanf("%*d");
	// Prompt the user to enter month
	//printf("Enter month in number between 1 and 12: ");


	// Print calendar for the month of the year
}

/** Print the calendar for a month in a year */
//void printMonth(int year, int month) {
//	// Print the headings of the calendar
//	;
//
//	// Print the body of the calendar
//	printMonthBody(year, month);
//}

/** Print the month title, e.g., May, 1999 */

void printcalendar(int year, int x){
	
char getMonthName[] = { 'Jan', 'Feb', 'Mar', 'Apr', 'May', 'June', 'July', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec' };
	
	printf("         %s  %d\n", getMonthName[x], year);
	printf("-----------------------------\n");
	printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    


}


/** Get the English name for the month */

	/*switch (month) {
		
	case 1: strcpy(monthName, "January"); break;
	case 2: strcpy(monthName, "February"); break;
	case 3: strcpy(monthName, "March"); break;
	case 4: strcpy(monthName, "April"); break;
	case 5: strcpy(monthName, "May"); break;
	case 6: strcpy(monthName, "June"); break;
	case 7: strcpy(monthName, "July"); break;
	case 8: strcpy(monthName, "August"); break;
	case 9: strcpy(monthName, "September"); break;
	case 10: strcpy(monthName, "October"); break;
	case 11: strcpy(monthName, "November"); break;
	case 12: strcpy(monthName, "December");
	}

	return monthName;*/


/** Print month body */
void printMonthBody(int year, int month) {
	// Get start day of the week for the first date in the month
	int startDay = getStartDay(year, month);

	// Get number of days in the month
	int numberOfDaysInMonth = getNumberOfDaysInMonth(year, month);

	// Pad space before the first day of the month
	int i = 0;
	for (i = 0; i < startDay; i++)
		printf("    ");

	for (i = 1; i <= numberOfDaysInMonth; i++) {
		printf("%4d", i);

		if ((i + startDay) % 7 == 0)
			printf("\n");
	}

	printf("\n");
}

/** Get the start day of month/1/year */
int getStartDay(int year, int month) {
	const int START_DAY_FOR_JAN_1_1800 = 3;
	// Get total number of days from 1/1/1800 to month/1/year
	int totalNumberOfDays = getTotalNumberOfDays(year, month);

	// Return the start day for month/1/year
	return (totalNumberOfDays + START_DAY_FOR_JAN_1_1800) % 7;
}

/** Get the total number of days since January 1, 1800 */
int getTotalNumberOfDays(int year, int month) {
	int total = 0;

	// Get the total days from 1800 to 1/1/year
	for (int i = 1800; i < year; i++)
	if (isLeapYear(i))
		total = total + 366;
	else
		total = total + 365;

	// Add days from Jan to the month prior to the calendar month
	for (int i = 1; i < month; i++)
		total = total + getNumberOfDaysInMonth(year, i);

	return total;
}

/** Get the number of days in a month */
int getNumberOfDaysInMonth(int year, int month) {
	if (month == 1 || month == 3 || month == 5 || month == 7 ||
		month == 8 || month == 10 || month == 12)
		return 31;

	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;

	if (month == 2) return isLeapYear(year) ? 29 : 28;

	return 0;// If month is incorrect
}

/** Determine if it is a leap year */
int isLeapYear(int year) {
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}
