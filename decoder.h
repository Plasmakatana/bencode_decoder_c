#ifndef BITTORRENT_C_DECODER_H
#define BITTORRENT_C_DECODER_H

#include <stdbool.h>

char *decode_string(const char** );
char *decode_int(const char** );
char *decode_list(const char** );
char *decode_dict(const char** );
char* decode_bencode(const char** );

bool is_digit(char c);

#endif
