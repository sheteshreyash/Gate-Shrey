#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Assignment Operator
    int a = 10, b = 20, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s;
    printf("a = %d, b = %d\n", a, b);

    // Arithmetic Operators
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("b %% a = %d\n", a % b);

    int c = 4 * 5 + 30 / 2 - 1;
    printf("c = %d\n", c);

    int d = e = f = 30;
    printf("%d\n", d);
    printf("%d\n", (d = 200));

    // Modulus Operator
    g = -15, h = 7;
    printf("g %% h = %d\n", g % h);
    i = 15, j = -7;
    printf("i %% j = %d\n", i % j);
    k = -15, l = -7;
    printf("k %% l = %d\n", k % l);

    // Relational Operators
    printf("%d\n", (10 > 20));
    printf("%d\n", (10 <= 10));
    printf("%d\n", (20 <= 10));
    printf("%d\n", (10 == 10));
    printf("%d\n", (10 != 10));

    //eg
    o = printf("shete");
    printf("%d\n", o);

    p = printf("Gate %d Wallah", printf("Jai ho"));
    printf("%d\n", p);
    printf("\n");

    // Logical Operators
    // 1. Logical AND (&&)
    printf("%d\n", (10 && 20));  // Logical AND and Logical OR are short-circuit and binary operators
    printf("%d\n", (10 && -12)); // prints 1 because both the operands are non-zero
    printf("%d\n", (0 && 20));   // prints 0 because the first operand is zero
    printf("%d\n", (2 && 0));    // prints 0 because the any one of the operand is zero

    // 2. Logical OR (||)
    printf("%d\n", (10 || 20));  // prints 1 because both the operands are non-zero
    printf("%d\n", (10 || -12)); // prints 1 because both the operands are non-zero
    printf("%d\n", (0 || 20));   // prints 1 because the any one of the operand is non-zero
    printf("%d\n", (0 || 0));    // prints 0 because both the operands are zero

    // 3. Logical NOT (!)
    printf("%d\n", !10); // prints 0 because 10 is non-zero
    printf("%d\n", !0);  // prints 1 because 0 is zero


    // Modify Operators
    // 1. Increment Operator (++)
    int x = 3, y;
    y = ++x; // x is incremented first and then assigned to y (its called preincrement)
    printf("x = %d, y = %d\n", x, y);

    int x1 = 3, y1;
    y1 = x1++; // x is assigned to y first and then incremented (its called postincrement)
    printf("x1 = %d, y1 = %d\n", x1, y1);

    // eg
    int x2 = 4, j2;
    j2 = ++x2 + ++x2 + x2++; // value of the expression changes from compiler to compiler because of undefined behaviour
    printf("x2 = %d, j2 = %d\n", x2, j2);

    int a1 = 30 > 20 > -1 > 0;
    printf("%d\n", a1);  // prints 1 due to associativity of relational operators

    int b1 = 20 > 30 != 40 < 1 > -1 != 2;
    printf("%d\n", b1);  // prints 1 due to associativity of relational operators

    // Operator precdece and associativity
    // (1) Parentheses
    // (2) Unary operators (++, --, !, ~)
    // (3) Multiplicative operators (*, /, %)
    // (4) Additive operators (+, -)
    // (5) Shift operators (<<, >>)
    // (6) Relational operators (<, <=, >, >=)
    // (7) Equality operators (==, !=)
    // (8) Bitwise AND (&)
    // (9) Bitwise XOR (^)
    // (10) Bitwise OR (|)
    // (11) Logical AND (&&)
    // (12) Logical OR (||)
    // (13) Conditional operator (?:)
    // (14) Assignment operator (=)
    // (15) Comma operator (,)

    // Associativity of operators
    // (1) Unary operators (++, --, !, ~)
    // (2) Multiplicative operators (*, /, %)
    // (3) Additive operators (+, -)
    // (4) Shift operators (<<, >>)
    // (5) Relational operators (<, <=, >, >=)
    // (6) Equality operators (==, !=)
    // (7) Bitwise AND (&)
    // (8) Bitwise XOR (^)
    // (9) Bitwise OR (|)
    // (10) Logical AND (&&)
    // (11) Logical OR (||)
    // (12) Conditional operator (?:)
    // (13) Assignment operator (=)
    // (14) Comma operator (,)
    // (15) Parentheses

    // eg
    int a5 = 2, b5 = 3, c5 = 1;
    int d5 = ++a5 || ++b5 && c5++;
    printf("d5 = %d\n", d5);  // part after || is not evaluated because of short-circuit nature of the operator


    // Bitwise Operators
    // 1. Bitwise AND (&)
    printf("%d\n", (1 & 13)); // 0001 & 1101 = 0001 = 1
    printf("%d\n", (1 & 6)); // 0001 & 0110 = 0000 = 0

    // 2. Bitwise XOR (^)
    printf("%d\n", (13 ^ 20)); // 1101 ^ 10100 = 1101 = 13
    printf("%d\n", (13 ^ 13)); // 1101 ^ 1101 = 0000 = 0

    // 3. Bitwise OR (|)
    printf("%d\n", (13 | 20)); // 1101 | 10100 = 11101 = 29
    printf("%d\n", (13 | 13)); // 1101 | 1101 = 1101 = 13

    // 4. Bitwise NOT (~)  : uses 1's complement
    printf("%d\n", (~13)); // ~1101 = 11111111111111111111111111110010 = -14  -(a+1)
    printf("%d\n", (~(-13))); // ~11111111111111111111111111110011 = 12

    // 5. Bitwise Left Shift (<<)
    printf("%d\n", (10 << 1)); // 1010 << 1 = 10100 = 20
    printf("%d\n", (10 << 2)); // 1010 << 2 = 101000 = 40  gets multiplied by 2^n where n is the number of bits shifted

    // 6. Bitwise Right Shift (>>)
    printf("%d\n", (10 >> 1)); // 1010 >> 1 = 101 = 5
    printf("%d\n", (10 >> 2)); // 1010 >> 2 = 10 = 2  gets divided by 2^n where n is the number of bits shifted


    // Conditional Operator (?:) also called as ternary operator
    int a6 = 10, b6 = 20, c6;
    c6 = (a6 > b6) ? a6 : b6;
    printf("c6 = %d\n", c6);  // first checks the condition if true then assigns a6 to c6 else b6 to c6 and if false then assigns b6 to c6





    return 0;
}
