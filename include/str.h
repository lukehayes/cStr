#ifndef C_STR_H
#define C_STR_H

typedef struct Str Str;

/**
* Create a new Str object.
*
* @param const char* s    The text for the Str object;
*
* @return Str*    A new Str object.
*/
Str* StrCreate(const char* s);

/**
* Destroy a Str object.
*
* @param Str*    The Str object to be destroyed.
*/
void StrDestroy(Str* s);

/**
* Reverse a the string contents of a Str object.
*
* @param Str*    The Str object to be destroyed.
*/
void StrRev(Str* s);

/**
* Print a Str object to std out.
*
* @param Str*    The Str object to be destroyed.
*/
void StrPrint(Str* s);



#endif // C_STR_H



