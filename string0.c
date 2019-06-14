#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
	string str = get_string("Input: ");
	printf("Output:\n");
	for(int i = 0, n = strlen(str); i < n; i++)
	{
		printf("%c\n", str[i]);
	}
}
