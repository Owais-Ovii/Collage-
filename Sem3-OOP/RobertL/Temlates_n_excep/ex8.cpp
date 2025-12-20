
#include <iostream>
using namespace std;

class BoundsError {};

class SafeArray {
    int arr[5];
public:
    int& operator[](int i) {
        if(i<0||i>=5) throw BoundsError();
        return arr[i];
    }
};

int main() {
    SafeArray a;
    try {
        a[10]=3;
    } catch(BoundsError) {
        cout<<"Out of bounds";
    }
}
