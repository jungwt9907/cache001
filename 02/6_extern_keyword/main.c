#include <stdio.h>
#include "minion.h"

extern unsigned int g_hp;
extern unsigned int g_strength;
int main(void)
{
	printf("Normal minion:\n"); /* 100 */
	printf("hp: %u\n", g_hp);
	printf("strength: %u\n", g_strength); /* 10 */

	printf("\n");

	go_berserk();
	add_gold(10u);

	printf("Berserk minion: \n");
	printf("hp: %u", g_hp); /* 150 */

	printf("strength: %u\n", g_strength); /* 30 */

	return 0;
}