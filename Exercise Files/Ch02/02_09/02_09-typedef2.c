#include <stdio.h>
#include <string.h>

int main()
{
	struct person {
		char name[32];
		int iq;
	};
	typedef struct person human;
	human me;

	strcpy(me.name,"Jobless Developer");
	me.iq = 567;

	printf("%s has an IQ of %d\n",me.name,me.iq);

	return(0);
}
