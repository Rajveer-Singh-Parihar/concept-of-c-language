// STRUCUTRE -> structure is a user defined datatype which is constructed by the help of primitive  and derived datatype.

// It can store more than one value of different datatype in different memory location.

// minimum size of structure is 1 byte and created by the struct keyword.

 #include<stdio.h>
 struct stu{
    int a; // 2byte
    char b;  // 1byte
    float c; // 4byte
 };
 void main()
 {
    struct stu s;
    printf(" maximum size of structure is %d",sizeof(s)); // maximum size of strucutre is 12
    return 0;
 }