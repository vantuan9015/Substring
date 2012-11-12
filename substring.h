#ifndef  SUBSTRING_H
#define SUBSTRING_H

#include<iostream>

// This returns true if the first string is a prefix of the second. It does this by calling on itself recursively. //
bool is_prefix(const char* string1, const char* string2, int position);

int substring_position(const char* string1, const char* string2);

#endif
