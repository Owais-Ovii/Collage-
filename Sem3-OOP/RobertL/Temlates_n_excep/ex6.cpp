
#include <iostream>
using namespace std;

template <class T>
class SafeArray {
    T arr[10];
public:
    T& operator[](int i) {
        if(i<0||i>=10) {
            cout<<"Index Error"; exit(1);
        }
        return arr[i];
    }
};

int main() {
    SafeArray<int> a;
    a[0]=10;
    cout<<a[0];
}
