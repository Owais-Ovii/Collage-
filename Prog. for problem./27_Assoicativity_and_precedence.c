#include <stdio.h>


int main() {

    /*

Level	Operators	Description	Associativity
1	() [] -> .	Function call, array subscript, struct/union member access	                                        Left-to-right
2	++ -- + - ! ~ * & (type) sizeof _Alignof	Unary plus/minus, logical NOT, bitwise NOT, pointer, cast, sizeof	Right-to-left
3	* / %	Multiplication, division, modulus	                                                                    Left-to-right
4	+ -	Addition and subtraction		                                                                             Left-to-right
5	<< >>	Bitwise shift left and right	                                                                    	Left-to-right
6	< <= > >=	Relational (less/greater than)		                                                                 Left-to-right
7	== !=	Equality		                                                                                         Left-to-right
8	&	Bitwise AND		                                                                                              Left-to-right
9	^	Bitwise XOR		                                                                                             Left-to-right
10	`	`	Bitwise OR
11	&&	Logical AND		                                                                                             Left-to-right
12	`		`
13	?:	Ternary conditional	                                                                    	                Right-to-left
14	= += -= *= /= %= <<= >>= &= ^= `	=`	Assignment
15	,	Comma		                                                                                                  Left-to-right


Assosciatvity: Associativity refers to the rule that dictates how operators of the same precedence are grouped when evaluating an expression.

Precedence: Operator precedence is the order in which operators are applied (or evaluated) in an expression. When you have multiple operators in an expression, precedence dictates which operator gets evaluated first.
    */
    printf("5/5+8-6=%d\n",5/5+8-6);
    printf("3*2%%5=%d",3*2%6);
    printf("\n5/5+8-6%%8*2=%d",5/5+8-6%8*2);
    printf("\tHypothesis: The expression would be evaluated in this manner:((5/5)+8)-((6%%8)*2)");
    int y=0;
    y==3*2%6&&0||5&&0>>2;
    printf("\n%d",    y==3*2%6&&0||5&&0>>2    );
    printf("\n%d",y);
    int x=1;
    x==3*2%6&&0||5&&1>>2;
    printf("\n%d",    x==3*2%6&&0||5&&10>>2    );
    printf("\n%d",x);

    printf("\n%d",    x==3*2%6&&0||5&&-10>>2    );


    printf("\n%d",-10>>2);




    int j=-8,w;
    bin_deci(j);
    w=j<<1;

    printf("\nThe left shifted value of %d is %d\n",j,w);
    bin_deci(w);

    w=j>>1;
    printf("\nThe right shifted value of %d is %d\n",j,w);
    //For left shift zero is added to the new bit in all the cases
    //for right shift of signed numbers, the leading bit replaces the new bit to preserve the sign in all cases
    //for right shift of unsigned numbers, leading bit is replaced by 0
    bin_deci(w);

    
    j=5;


    bin_deci(j);
    w=j<<1;

    printf("\nThe left shifted value of %d is %d\n",j,w);
    bin_deci(w);

    w=j>>1;
    printf("\nThe right shifted value of %d is %d\n",j,w);//for left shift 
    bin_deci(w);

w=-1;j=1;
printf("\nFor w = -1 and j=1");
y=w+1&&++j;
printf("\ny=w+1&&++j ... y= %d, w=%d, j=%d",y,w,j);

int _;
double a=0.0;
printf("%Lf",a);
    return 0;
}