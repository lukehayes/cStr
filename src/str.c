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

    printf("Current Str Length %lu\n", strlen(s));

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
