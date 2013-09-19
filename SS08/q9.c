#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Content-Type: text/html\n\n");
	printf("<html><head><title>C question</title></head><body>");
	printf("<p>Hello");
	fflush(stdout);
	printf(getenv("QUERY_STRING"));
	printf(" this server computer has been running for ");
	fflush(stdout);
	system("uptime");
	printf("hours. <br/> ");
	printf("<a href='a.out?Tom'>Show again</a>");	
	printf("</p></body></html>");
}