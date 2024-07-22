#ifndef LDH_STR_H
#define LDH_STR_H

#include <string.h>

typedef struct Str
{
    char* text;
    size_t length;
} Str;

/**
* Create a new Str object.
*
* @param const char* s    The text for the Str object;
*
* @return Str*    A new Str object.
*/
Str* ldh_StrCreate(const char* s);

/**
* Destroy a Str object.
*
* @param Str*    The Str object to be destroyed.
*/
void ldh_StrDestroy(Str* s);

/**
* Reverse a the string contents of a Str object.
*
* @param Str*    The Str object to be destroyed.
*/
void ldh_StrRev(Str* s);




#endif // LDH_STR_H



