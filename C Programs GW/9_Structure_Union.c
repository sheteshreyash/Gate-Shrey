#include <stdio.h>
#include <string.h> // Include string.h for strcpy function

// 1.1
struct student1
{
    int roll_no;
    char name[20];
    float marks;
};

// 1.2
struct
{
    int roll_no;
    char name[20];
    float marks;
} s2;

// 1.3
struct student1_3
{
    int roll_no;
    char name[20];
    float marks;
} s3;

// 2 Array of structure
struct student2
{
    int roll_no;
    char name[20];
    float marks;
} s[3];

// 3. Nested structure
struct address
{
    char city[20];
    char state[20];
};

// 4. Self referential structure
struct node
{
    int data;
    struct node *next;
};

// 5. Union
union student
{
    int roll_no;
    char name[20];
    float marks;
};

int main(int argc, char const *argv[])
{
    // 1. Structure
    // Three ways to implement structure
    // 1.1
    struct student1 s1;
    s1.roll_no = 1;
    s1.marks = 99.9;

    // 1.2
    s2.roll_no = 2;
    s2.marks = 98.9;

    // 1.3
    s3.roll_no = 3;
    s3.marks = 97.9;

    // 2. Array of structure
    s[0].roll_no = 4;
    s[0].marks = 96.9;

    // 3. Nested structure
    struct address a1;
    struct address a2;
    strcpy(a1.city, "Bangalore");
    strcpy(a1.state, "Karnataka");
    strcpy(a2.city, "Mysore");
    strcpy(a2.state, "Karnataka");

    // 4. Self referential structure
    struct node n1;
    struct node n2;
    n1.data = 10;
    n1.next = &n2;
    n2.data = 20;
    n2.next = NULL;

    // 5. Union
    union student u1;
    u1.roll_no = 5;
    u1.marks = 95.9;

    return 0;
}