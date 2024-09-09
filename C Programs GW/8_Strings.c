#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Strings

    // 1. String implementation using character array
    // char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // char str1[] = "Omkar";

    // char name[] = "Shete";
    // printf("%s\n", name + 1);
    // printf("%s\n", &name[1]);
    // printf("%s\n", *(name + 1));
    // printf("%s\n", name[1]);


    // 2. String implementation using character pointer
    // char *str2 = "Shreyash";
    // printf("%s\n", str2);
    // printf("%c\n", *str2);
    // printf("Hello" + 1);


    // Eg1
    // char *p = "Rahul";
    // char *q = "Pankaj";
    // q = p;
    // p++;
    // printf("%s\n", p);
    // printf("%s\n", q);

    // Eg2
    char a[] = "Hello";
    char *p = "Shete";
    char *t = "Omkar";
    p = a;
    t = a + 2;
    p++;
    *(t) = 'k';
    printf("%s\n", t);

    return 0;
}
