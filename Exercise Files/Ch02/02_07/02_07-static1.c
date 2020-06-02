#include <stdio.h>

char *myname(void)
{
	char me[] = "Jobless Developer";

	return(me);
}

int main()
{
	printf("This course's author is %s\n", myname() );

	return(0);
}

