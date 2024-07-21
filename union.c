// UNION -> A union is special type of datatype that allows to store different types of datatype in same memory location.
// one member contain at the time.
// largest variable occupy the memory.


#include<stdio.h>
union stu{
    int a;
    char b;
    float c;
};

void main()
{
    union stu s;
    s.a=65;
    printf("%c",s.b); //
    return 0;
}
