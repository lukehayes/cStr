#include "str.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


Str* ldh_StrCreate(const char* s)
{
    Str* strObject    = malloc(sizeof(Str));

    strObject->text   = calloc(strlen(s), sizeof(char));
    strncpy(strObject->text, s, strlen(s));
    /*strObject->text[strlen(s) + 1] = '\0';*/

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

void ldh_StrPrint(Str* s)
{
    printf("Str: \"%s\" Size: %lu\n", s->text, s->length);
}
