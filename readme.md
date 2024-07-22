# cStr

A tiny string library to help with working with strings in C.


### Usage

Read a file into a string:

```
Str* s1 = ldh_StrCreate("Hello World");
ldh_StrDestroy(s1);
```

Get the size of the string:

```
Str* s1 = ldh_StrCreate("Hello World");
size_t size = s1.size;
```
