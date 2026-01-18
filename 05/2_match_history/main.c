#include <stdio.h>
#include "match_history_io.h"

#define MATCH_COUNT (5)
#define NUM_CHAMPS (5)

#define BUFFER_LENGTH (4096)

int main(void)
{
	const char* names[NUM_CHAMPS] =
	{
		"Erpin",
		"Elena",
		"Mayo",
		"Amelia",
		"Rim"
	};
	const int wins[NUM_CHAMPS] =
	{
		52,53,36,56,54
	};
	const int losses[NUM_CHAMPS] =
	{
		55, 64, 34, 53, 55
	};
	const float average_kills[NUM_CHAMPS] =
	{
		6.11f, 4.33f, 5.67f, 7.66f, 3.55f
	};
	const float everage_deaths[NUM_CHAMPS] =
	{
		7.44f, 2.44f, 3.45f, 7.22f, 4.55f
	};
	const float everage_assists[NUM_CHAMPS] =
	{
		5.44f, 6.75f, 11.3f, 3.2f, 7.5f
	};

	char buffer[BUFFER_LENGTH];

	write_match_history(buffer, BUFFER_LENGTH, names, wins, losses, average_kills, everage_deaths, everage_assists, NUM_CHAMPS);
	read_match_history(buffer);
	return 0;
}