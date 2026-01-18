#pragma once
#ifndef MATCH_HISTORY_IO_H
#define MATCH_HISTORY_IO_H

write_match_history(char* buffer, size_t buffer_size, const char* names,
	const int wins[], const int losses[],
	const float kills[], const float deaths[], const float assists[], size_t count);
read_match_history(char* buffer);

#endif /* MATCH_HISYORY_IO_H */