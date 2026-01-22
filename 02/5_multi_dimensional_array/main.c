#include <stdio.h>

int main(void)
{
	int numbers[2][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};
	float average = 0;
	size_t i;
	size_t j;

	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%d ", numbers[i][j]);
			average += numbers[i][j];
		}
		printf("\n");
	}
	average /= 6;
	printf("average: %.2f", average);

	return 0;
}