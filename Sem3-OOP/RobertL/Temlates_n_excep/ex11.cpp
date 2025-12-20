
#include <iostream>
#include <cstring>
using namespace std;

class StringError {
public:
    string msg;
    StringError(string m):msg(m){}
};

class MyString {
    char str[10];
public:
    MyString(const char* s) {
        if(strlen(s)>=10) throw StringError("Too long");
        strcpy(str,s);
    }
};

int main() {
    try {
        MyString s("veryverylong");
    } catch(StringError e) {
        cout<<e.msg;
    }
}
