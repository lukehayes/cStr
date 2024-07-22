#include "str.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


Str* ldh_StrCreate(const char* s)
{
    Str* strObject    = malloc(sizeof(Str));

    strObject->text   = malloc(sizeof(char) * strlen(s) + 1);
    strncpy(strObject->text, s, strlen(s));
    strObject->text[strlen(s) + 1] = '\0';

    strObject->length = strlen(s);

    return strObject;
}

void ldh_StrDestroy(Str* s)
{
    free(s->text);
    free(s);

    s->text = NULL;
    s = NULL;
}

void ldh_StrRev(Str* s)
{
    if(s == NULL) return;

    size_t j = s->length - 1;

    for(int i = 0; i <= s->length/2 ; i++)
    {
        char tStart = s->text[i];
        char tEnd   = s->text[j];

        s->text[j] = tStart;
        s->text[i] = tEnd;

        j--;
    }
}
