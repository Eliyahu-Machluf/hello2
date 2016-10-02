#include <stdio.h>
#include <stdlib.h>

#include "hello.h"
int main()
{
	printf( "Hello World!\n%s\n", HELLO_SECOND_LINE );
	return 0;
}


void foo()
{
	printf( "welcome from foo method!\n" );

}
