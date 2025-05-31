#include <stdio.h>

int main() {

    int a = 10, b = 20, c;
    printf("c = a < b == b > a=%d\n", c = a < b == b > a);

    a = 1, b = 2, c = 3;
    int x=(a + b, b + c, c + a);
    printf("x=(a + b, b + c, c + a)=%d\n", x);

    int i = 1;
    printf("i++ + ++i=%d\n", i++ + ++i);

    a = 5, b = 10;
    x = a = b;
    printf("a=%d b=%d x=%d", a, b, x);

    a = 0, b = 1, c = 2;
    printf("a && b | c=%d\n", a && b | ++c);//short-circuiting
    printf("c=%d\n",c);

    x = 5;
    printf("x+++x=%d\n", x+++x);
    printf("%d",x);

    a = 1, b = 2, c = 3;
    a += b *= c;
    printf("a=%d b=%d c=%d\n", a, b, c);

    a = 5, b = 10, c;
    c = a > b ? a++ : ++b;
    printf("a=%d b=%d c=%d\n", a, b, c);

    x = 2;
    int y = 3;
    printf("x & y == 2=%d\n", x & y == 2);

    /*x = 0;
    y = 10 / x && printf("Hello");
    printf("y=%d\n",y);*/


    a = 5, b = 10;
    int res = a >( b ? a++ : b > 5 ? b-- : a--);
    printf("a > b ? a++ : b > 5 ? b-- : a--=%d  a=%d and b=%d\n", res,a,b);

    

    return 0;
}