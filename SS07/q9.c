#include<stdlib.h>
#include<stdio.h>
int main()
{
	printf("Content-Type: text/html\n\n");
	printf("<html><head><title>C script</title>");
	printf("<link rel='stylesheet' href='q8.css' type='text/css'/>");
	printf("</head>");
	printf("<body><p>");
	fflush(stdout);
	printf("Hello");
	printf(getenv("QUERY_STRING"));
	printf(", you came from ");
	printf(getenv("HTTP_REFERER"));
	printf(".");
	printf("</p></body></html>");
}
