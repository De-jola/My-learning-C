#include <unistd.h>
/**
 * using the write function to print a string
 */
int main(void)
{
	write(1, "Hello World\n", 12);
	return 0;
}
