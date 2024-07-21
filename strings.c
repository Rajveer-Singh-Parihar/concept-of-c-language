// STRINGS -> Sequence of Characters is known as Strings . every sring is terminated by \0 .
// e.g - "S","xyx","",printf(" hello world") - String constant .
// null character indicates the end of the string . the ascii code of null character is zero.

// string functions - strcpy, strcmp, strlen , strrev, strlwr , strupr, strcat.
#include<stdio.h>
int main(){

    char str[] = "rajVeer", str2[] = "banna";;
    printf("%s",strupr(str));
    printf("%s",strlwr(str));
    printf("%s",strrev(str));
    printf("%s",strcat(str,str2));
    printf("%s",strlen(str));

    return 0;
}