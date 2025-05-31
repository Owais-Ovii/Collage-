#include <stdio.h>

int fun() {
    int a = 1, b = 2;
    return (a++, b++, a + b);
}


int main() {

    int a = 1, b = 2, c = 3;
    int x = (a + b, b + c, c + a);
    printf("x=%d\n", x);

    a = 5;
    b = (a += 3, a * 2, a - 1);
    printf("b=%d\n", b);

    x = 5;
    int y = 10;
    if (x > 2, y < 20)
        printf("Hello\n");
    else
       {printf("World\n");}


    printf("func()=%d\n", fun());


    a = 1;
    b = (a++, a++, a++); // multiple side effects
    printf("a=%d b=%d\n", a, b);
    
        



    return 0;
}