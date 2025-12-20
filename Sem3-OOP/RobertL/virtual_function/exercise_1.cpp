
#include <iostream>
#include <string>
using namespace std;

class publication
{
protected:
    string title;
    float price;
public:
    virtual void getdata()
    {
        cin.ignore();
        getline(cin, title);
        cin >> price;
    }
    virtual void putdata()
    {
        cout << title << " " << price;
    }
    virtual ~publication() {}
};

class book : public publication
{
    int pages;
public:
    void getdata()
    {
        publication::getdata();
        cin >> pages;
    }
    void putdata()
    {
        publication::putdata();
        cout << " " << pages << endl;
    }
};

class tape : public publication
{
    float minutes;
public:
    void getdata()
    {
        publication::getdata();
        cin >> minutes;
    }
    void putdata()
    {
        publication::putdata();
        cout << " " << minutes << endl;
    }
};

int main()
{
    publication* pubarr[10];
    int n = 0;
    char choice;

    do
    {
        cout << "b or t: ";
        cin >> choice;

        if(choice == 'b')
            pubarr[n] = new book;
        else
            pubarr[n] = new tape;

        pubarr[n++]->getdata();

        cout << "continue? y/n: ";
        cin >> choice;
    } while(choice == 'y');

    for(int i = 0; i < n; i++)
        pubarr[i]->putdata();

    return 0;
}
