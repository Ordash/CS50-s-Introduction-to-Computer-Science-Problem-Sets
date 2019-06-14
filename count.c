#include <stdio.h>
#include <cs50.h>

const int COUNT = 3;

void chart(int score);

int main(void)
{
	int scores[COUNT];
	for(int i = 0; i < COUNT; i++)
	{
		scores[i] = get_int("Score %i: ", i + 1);
	}
	for(int i = 0; i < COUNT; i++)
	{
		chart(scores[i]);
	}

}

void chart(int score)
{
	for(int i = 0; i < score; i++)
	{
		printf("#");
	}
	printf("\n");
}
