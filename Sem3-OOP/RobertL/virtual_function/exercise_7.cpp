
#include <iostream>
using namespace std;

class Token
{
public:
    virtual float getNumber() = 0;
    virtual char getOperator() = 0;
    virtual ~Token() {}
};

class Operator : public Token
{
    char op;
public:
    Operator(char c) : op(c) {}
    char getOperator() { return op; }
    float getNumber() { return 0; }
};

class Number : public Token
{
    float num;
public:
    Number(float n) : num(n) {}
    float getNumber() { return num; }
    char getOperator() { return 0; }
};

int main()
{
    Token* t1 = new Number(3.14f);
    Token* t2 = new Operator('+');
    cout << t1->getNumber() << " " << t2->getOperator() << endl;
    return 0;
}
