#include <stdio.h>

enum champ {
    CHAMP_ERPIN,
    CHAMP_NERR,
    CHAMP_ELENA,
    CHAMP_SPEEKY,
    CHAMP_TIG
};

enum role {
    ROLE_ATTACKER,
    ROLE_TANKER,
    ROLE_SUPPORTER,
};

int main(void)
{
    enum champ my_champ = CHAMP_ERPIN;
    enum role my_role = ROLE_TANKER;

    printf("my_champ: %d\n", my_champ);
    printf("my_role: %d\n", my_role);
    printf("\n");

    my_role = CHAMP_NERR;
    printf("my_role: %d\n", my_role);

    return 0;
}