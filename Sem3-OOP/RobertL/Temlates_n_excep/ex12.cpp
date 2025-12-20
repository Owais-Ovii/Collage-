
#include <iostream>
#include <fstream>
using namespace std;

class dofile {
public:
    class FileError {};
    fstream file;
    dofile(const char* name) {
        file.open(name, ios::in|ios::out);
        if(!file) throw FileError();
    }
};

int main() {
    try {
        dofile f("nofile.txt");
    } catch(...) {
        cout<<"File error";
    }
}
