#include "minion.h"

unsigned int g_hp = 100u;
unsigned int g_strength = 10u;
unsigned int g_gold = 20u;
void go_berserk(void)
{
	g_hp += 50u;
}
void add_gold(unsigned int gold)
{
	g_gold += gold;
}