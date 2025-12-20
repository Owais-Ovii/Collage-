
#include <iostream>
using namespace std;

template <class T>
class frac {
    T n,d;
public:
    frac(T n=0,T d=1):n(n),d(d){}
    frac operator+(frac f) {
        return frac(n*f.d + f.n*d, d*f.d);
    }
    void show() { cout<<n<<"/"<<d; }
};

int main() {
    frac<char> a(1,2), b(1,3);
    frac<char> c = a+b;
    c.show();
}
