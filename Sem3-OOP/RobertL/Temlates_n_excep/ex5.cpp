
#include <iostream>
using namespace std;

template <class T>
T amax(T arr[], int size) {
    T m=arr[0];
    for(int i=1;i<size;i++)
        if(arr[i]>m) m=arr[i];
    return m;
}

int main() {
    int a[]={1,5,3};
    cout<<amax(a,3);
}
