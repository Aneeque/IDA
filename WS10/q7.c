#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Content-Type: text/html\n\n");
	printf("<html><head><title>C-Sript</title></head>");
	printf("<body><p>");
	fflush(stdout);
	system("pwd");
	printf("</p></body></html>");
	return 0;
}
