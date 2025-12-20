
#include <iostream>
using namespace std;

class Array
{
    int* ptr;
    int size;
public:
    Array(int s) : size(s)
    {
        ptr = new int[size];
    }

    Array(const Array& a)
    {
        size = a.size;
        ptr = new int[size];
        for(int i = 0; i < size; i++)
            ptr[i] = a.ptr[i];
    }

    Array& operator=(const Array& a)
    {
        if(this == &a)
            return *this;

        delete[] ptr;
        size = a.size;
        ptr = new int[size];

        for(int i = 0; i < size; i++)
            ptr[i] = a.ptr[i];

        return *this;
    }

    int& operator[](int i)
    {
        return ptr[i];
    }

    ~Array()
    {
        delete[] ptr;
    }
};

int main()
{
    Array a1(5);
    for(int i = 0; i < 5; i++)
        a1[i] = i * i;

    Array a2(a1);
    Array a3(3);
    a3 = a1;

    for(int i = 0; i < 5; i++)
        cout << a2[i] << " ";

    return 0;
}
