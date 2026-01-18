#include <stdio.h>
#include <string.h>

#include "file_utils.h"

int main(int argc, const char* argv[])
{
	if (argc != 3)
	{
		FILE* out;

		if (argc == 2 && strcmp(argv[1], "--help")) /* 사용자가 --help 인자를 사용했다면 stdout 사용법을 보여줌 */
		{
			out = stdout;
		}
		else
		{
			out = stderr;
		}
		fprintf(out, "+--------------------------------+\n");
		fprintf(out, "+       New File Copier v1       +\n");
		fprintf(out, "+--------------------------------+\n");
		fprintf(out, "usage: copy <src> <dst>\n");
		fprintf(out, "usage: copy --help to see help page");
		if (out == stderr) 
		{
			fprintf(out, "\nerror: invaild arguments\n");

			return 1;
		}

		printf("copyied\n");
		copy_file(argv[1], argv[2]);
		return 0;
	}
}