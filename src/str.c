#include "str.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Str
{
    char* text;
    size_t length;
} Str;



Str* StrCreate(const char* s)
{
    Str* strObject    = malloc(sizeof(Str));

    const size_t bufferSize = strlen(s) + 1;

    strObject->text   = malloc(sizeof(char) * bufferSize);

    strncpy(strObject->text, s, bufferSize);
    strObject->text[bufferSize] = '\0';

    strObject->length = bufferSize - 1;

    return strObject;
}

void StrDestroy(Str* s)
{
    free(s->text);
    free(s);

    s->text = NULL;
    s = NULL;
}

void StrRev(Str* s)
{
    if(s == NULL) return;

    size_t j = s->length - 1;

    if(s->length > 2)
    {
        for(int i = 0; i <= s->length/2 ; i++)
        {
            char tStart = s->text[i];
            char tEnd   = s->text[j];

            s->text[j] = tStart;
            s->text[i] = tEnd;

            j--;
        }
    } else
    {
        // This case is for strings that are length 2.
        char* a = &s->text[0];
        char* b = &s->text[1];

        // TODO Workout why this works later...
        *a=*a^*b;
        *b=*a^*b;
        *a=*b^*a;
    }
}

void StrPrint(Str* s)
{
    printf("Str: \"%s\" Size: %lu\n", s->text, s->length);
}
