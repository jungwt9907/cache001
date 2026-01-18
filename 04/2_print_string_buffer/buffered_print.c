#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#include "buffered_print.h"

#define BUFFER_LENGTH (32) /* 버퍼 최대 길이 */

static size_t s_buffer_index = 0u;		/* 버퍼 속 현제 위치 */
static char s_buffer[BUFFER_LENGTH];	/* 실제 버퍼 */

void buffered_print(const char* src)
{
	size_t num_left; /*남은 글자 수*/
	const char* p = src;	/*src 문자열에서 현재 위치를 기억할 포인터 */

	num_left = strlen(src);	/* 아직 src 에서 버퍼로 복사하지 않은 글자 수*/

	while (num_left > 0)	/* 모두 복사할 때 까지 반복 */
	{
		size_t copy_count = BUFFER_LENGTH - 1 - s_buffer_index; /* 버퍼로 복사할 문자 수*/

		const int buffer_empty = s_buffer_index == 0;
		if (num_left < copy_count) /* 버퍼에 충분한 공간이 있을 때*/
		{
			copy_count = num_left; /* num_left 만큼 복사 */
		}
		s_buffer_index += copy_count; /*현재 버퍼 위치를 copy_count 만큼 증가 시킴*/
		num_left -= copy_count;
		if (buffer_empty) /*버퍼가 비어있다면 */
		{
			strncpy(s_buffer, p, copy_count);
			s_buffer[s_buffer_index] = '\0';
		}
		else
		{
			strncat(s_buffer, p, copy_count);
		}
		p += copy_count;

		if(s_buffer_index == BUFFER_LENGTH -1) 
		{
			printf("%s\n", s_buffer);
			s_buffer_index = 0;
		}
	}
}