
#include <iostream>
using namespace std;

template <class T>
void swaps(T& a, T& b) {
    T t=a; a=b; b=t;
}

int main() {
    int x=1,y=2;
    swaps(x,y);
    cout<<x<<" "<<y;
}
