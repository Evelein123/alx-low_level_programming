/* This program prints the name of the file it was compiled from*/
#include <stdio.h>
/*The main function of the program*/
/*It takes no arguments and returns 0 on success*/
int main(void)
{
	/*Use the predefined macro __FILE__ to get the source file name*/
	printf("%s\n", __FILE__);
	/*Return 0 to indicate success*/
	return (0);
}
