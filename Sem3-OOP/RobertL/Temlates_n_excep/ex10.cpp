
#include <iostream>
#include <stdexcept>
using namespace std;

class DistanceError {
public:
    string msg;
    DistanceError(string m):msg(m){}
};

int main() {
    try {
        throw DistanceError("Invalid inches");
    } catch(DistanceError e) {
        cout<<e.msg;
    }
}
