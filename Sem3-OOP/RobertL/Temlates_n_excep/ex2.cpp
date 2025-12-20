
#include <iostream>
using namespace std;

template <class T>
class Queue {
    T* arr;
    int head, tail, size;
public:
    Queue(int s):size(s),head(0),tail(0) {
        arr = new T[size];
    }
    void push(T v) {
        arr[tail++] = v;
        if(tail==size) tail=0;
    }
    T pop() {
        T v = arr[head++];
        if(head==size) head=0;
        return v;
    }
};

int main() {
    Queue<int> q(5);
    q.push(1); q.push(2); q.push(3);
    cout<<q.pop()<<q.pop()<<q.pop();
}
