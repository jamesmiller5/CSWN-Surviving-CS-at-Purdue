#include <stdio.h>

//For testing
//Alias debug("Test\n") to fprintf(stderr, "Test\n")
#define debug(...) fprintf (stderr, __VA_ARGS__)

//For turning in
//#define debug(...)

int main( int argc, char ** argv ) {
	char c;
	while( EOF != (c = getchar())) {
		if( c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M' ) {
			c = c + 13;
		} else if ( c >= 'n' && c <= 'z' || c >= 'N' && c <= 'Z' ) {
			c = c - 13;
		}
		putchar( c );
	}
}
