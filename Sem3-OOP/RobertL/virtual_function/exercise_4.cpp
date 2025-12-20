
#include <iostream>
#include <string>
using namespace std;

class publication
{
protected:
    string title;
    float price;
public:
    virtual bool isOversize() = 0;
    virtual void getdata() {}
    virtual void putdata() {}
};

class book : public publication
{
    int pages;
public:
    void getdata()
    {
        cin.ignore();
        getline(cin, title);
        cin >> price >> pages;
    }
    void putdata()
    {
        cout << title << " " << price << " " << pages;
        if(isOversize())
            cout << " Oversize";
        cout << endl;
    }
    bool isOversize()
    {
        return pages > 800;
    }
};

class tape : public publication
{
    float minutes;
public:
    void getdata()
    {
        cin.ignore();
        getline(cin, title);
        cin >> price >> minutes;
    }
    void putdata()
    {
        cout << title << " " << price << " " << minutes;
        if(isOversize())
            cout << " Oversize";
        cout << endl;
    }
    bool isOversize()
    {
        return minutes > 90;
    }
};

int main()
{
    publication* p = new book;
    p->getdata();
    p->putdata();
    return 0;
}
