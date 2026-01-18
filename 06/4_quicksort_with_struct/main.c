#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "userdata.h"
#include "user_sorter.h"

enum { NUM_USERS = 7 };

int main(void)
{
	userdata_t users[NUM_USERS];
	size_t i;

	i = 0u;
	users[i].id = 482;
	users[i].sex = SEX_FEMALE;
	users[i++].age = 102;

	users[i].id = 510;
	users[i].sex = SEX_MALE;
	users[i++].age = 13;

	users[i].id = 32;
	users[i].sex = SEX_UNKNOWN;
	users[i++].age = 1;

	users[i].id = 221;
	users[i].sex = SEX_FEMALE;
	users[i++].age = 38;

	users[i].id = 33;
	users[i].sex = SEX_FEMALE;
	users[i++].age = 102;

	users[i].id = 35;
	users[i].sex = SEX_FEMALE;
	users[i++].age = 102;

	users[i].id = 1;
	users[i].sex = SEX_MALE;
	users[i++].age = 33;

	assert(i == NUM_USERS);

	puts("== sort by age, id ==");
	qsort(users, NUM_USERS, sizeof(userdata_t), compare_age_id);

	for (i = 0; i < NUM_USERS; ++i)
	{
		printf("age: %3d, id: %5d, sex: %d\n", users[i].age, users[i].id, users[i].sex);
	}
	puts("\n== sort by age(desc), sex ==");

	qsort(users, NUM_USERS, sizeof(userdata_t), compare_age_desc_sex);

	for (i = 0; i < NUM_USERS; ++i)
	{
		printf("age: %3d, id: %5d, sex: %d\n", users[i].age, users[i].id, users[i].sex);
	}

	return 0;
}