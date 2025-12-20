
#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
class Queue {
    T* arr;
    int head, tail, count, size;
public:
    Queue(int s):size(s),head(0),tail(0),count(0) {
        arr=new T[size];
    }
    void push(T v) {
        if(count==size) throw runtime_error("Queue Full");
        arr[tail++]=v; tail%=size; count++;
    }
    T pop() {
        if(count==0) throw runtime_error("Queue Empty");
        T v=arr[head++]; head%=size; count--;
        return v;
    }
};

int main() {
    Queue<int> q(2);
    try {
        q.push(1); q.push(2); q.push(3);
    } catch(exception& e) {
        cout<<e.what()<<endl;
    }
}
