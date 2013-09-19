#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Content-Type: text/html\n\n");
	printf("<html><head><title>C tester</title></head>");
	printf("<body><p>");
	printf("<a href=");
	fflush(stdout);
	printf(getenv("HTTP_REFERER"));
	printf(">Go back</a>");
	printf("</p></body></html>");	
	return 0;
}