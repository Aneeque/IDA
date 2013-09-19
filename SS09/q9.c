#include<stdlib.h>
#include<stdio.h>
int main()
{
	printf("Content-Type: text/html\n\n");
	printf("<html><head><title>C Script</title></head>");
	printf("<body>");
	printf("<form action='a.out' method='post'><p>");
	printf("<input type='submit' value='Click me!'/>");
	printf("</p></form></body></html>");
		
	return 0;
}
