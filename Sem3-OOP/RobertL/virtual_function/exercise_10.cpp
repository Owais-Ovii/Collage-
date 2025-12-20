
#include <iostream>
using namespace std;

class Token
{
public:
    virtual float getNumber() = 0;
    virtual char getOperator() = 0;
    virtual ~Token() {}
};

class Number : public Token
{
    float val;
public:
    Number(float v) : val(v) {}
    float getNumber() { return val; }
    char getOperator() { return 0; }
};

class Operator : public Token
{
    char op;
public:
    Operator(char c) : op(c) {}
    char getOperator() { return op; }
    float getNumber() { return 0; }
};

int main()
{
    Token* t1 = new Number(2.5f);
    Token* t2 = new Operator('*');
    cout << t1->getNumber() << " " << t2->getOperator();
    return 0;
}
