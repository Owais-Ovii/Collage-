
#include <iostream>
using namespace std;

class BoundsError {
public:
    int index;
    BoundsError(int i):index(i){}
};

class SafeArray {
    int arr[5];
public:
    int& operator[](int i) {
        if(i<0||i>=5) throw BoundsError(i);
        return arr[i];
    }
};

int main() {
    SafeArray a;
    try {
        a[6]=3;
    } catch(BoundsError e) {
        cout<<"Bad index "<<e.index;
    }
}
