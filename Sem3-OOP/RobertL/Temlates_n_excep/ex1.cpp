
#include <iostream>
using namespace std;

template <class T>
double average(T arr[], int size) {
    double sum = 0;
    for(int i=0;i<size;i++) sum += arr[i];
    return sum/size;
}

int main() {
    int a[] = {1,2,3,4};
    long b[] = {10,20,30};
    double c[] = {1.1,2.2,3.3};
    char d[] = {'a','b','c'};

    cout << average(a,4) << endl;
    cout << average(b,3) << endl;
    cout << average(c,3) << endl;
    cout << average(d,3) << endl;
}
