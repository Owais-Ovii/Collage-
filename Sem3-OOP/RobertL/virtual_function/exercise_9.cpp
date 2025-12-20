
#include <iostream>
using namespace std;

class link
{
public:
    int data;
    link* next;
    link(int d) : data(d), next(NULL) {}
};

class linklist
{
    link* first;
public:
    linklist() : first(NULL) {}

    linklist(const linklist& l)
    {
        first = NULL;
        link* curr = l.first;
        while(curr)
        {
            insert(curr->data);
            curr = curr->next;
        }
    }

    linklist& operator=(const linklist& l)
    {
        if(this == &l)
            return *this;
        first = NULL;
        link* curr = l.first;
        while(curr)
        {
            insert(curr->data);
            curr = curr->next;
        }
        return *this;
    }

    void insert(int d)
    {
        link* n = new link(d);
        n->next = first;
        first = n;
    }

    void display()
    {
        link* curr = first;
        while(curr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }
};

int main()
{
    linklist l1;
    l1.insert(10);
    l1.insert(20);

    linklist l2 = l1;
    l2.display();
    return 0;
}
