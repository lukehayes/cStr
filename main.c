#include "str.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    Str* s1 = ldh_StrCreate("Hi");
    Str* s2 = ldh_StrCreate("Another String, this time with spaces.");

    printf("Str Object Ptr %p, Text: %s, Size: %lu \n", s1, s1->text, s1->length);
    printf("Str Object Ptr %p, Text: %s, Size: %lu \n", s2, s2->text, s2->length);

    ldh_StrDestroy(s1);
    ldh_StrDestroy(s2);
}
