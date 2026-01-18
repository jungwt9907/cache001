#include <stdio.h>
#include "string_utils.h"

int main(void)
{
	int diff;
	diff = string_case_insentive_compare("hello", "HELL");
	printf("Hello to HELL : %d\n", diff); /* 1 */

	diff = string_case_insentive_compare("hello", "yello");
	printf("hello to yello : %d\n", diff); /* -1 */

	diff = string_case_insentive_compare("hello", "HELLO");
	printf("hello to HELLO : %d\n", diff); /* 0 */
	
	return 0;
}