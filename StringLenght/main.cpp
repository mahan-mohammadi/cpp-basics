#include <iostream>
#include <string>
using namespace std;
int main() {
    const string name = "mahan";
    int i=0;
    while (name[i]) {
        i++;
    }
    cout << i << endl;
}