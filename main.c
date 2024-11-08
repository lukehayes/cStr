#include "str.h"

int main(int argc, char *argv[])
{
    Str* s1 = StrCreate("Hi");
    Str* s2 = StrCreate("Another String, this time with spaces.");

    StrPrint(s1);
    StrPrint(s2);

    StrDestroy(s1);
    StrDestroy(s2);
}
