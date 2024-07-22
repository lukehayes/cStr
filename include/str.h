#ifndef LDH_STR_H
#define LDH_STR_H

#include <string.h>

typedef struct Str
{
    char* text;
    size_t length;
} Str;

/**
* Create a new string object.
*
* @param const char* s    The text for the Str object;
*
* @return Str*    A new Str object.
*/
Str* ldh_StrCreate(const char* s);

/**
* Destry a string object.
*
* @param Str*    The Str object to be destroyed.
*/
void ldh_StrDestroy(Str* s);


#endif // LDH_STR_H



