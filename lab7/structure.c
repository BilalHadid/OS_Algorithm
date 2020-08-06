#include <stdio.h>	


struct Book{
int bookId;
char title[20];
}
void main()
{
	struct Book b1;
	printf("Book id %d", b1.bookId);
	printf("Book title %s", b1.title);
	
}
