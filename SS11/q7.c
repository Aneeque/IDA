#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Content-Type: text/html\n\n");
	printf("<html><head><title>CSS</title></head>");
	printf("<body>");
	printf("<form action='a.out' method='get'>");
	printf("<p>");
	fflush(stdout);
	system("date");
	printf("<input type='submit'/></p>");
	printf("</form></body></html>");
	return 0;
}