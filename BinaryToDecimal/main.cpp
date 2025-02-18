#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary,i=0,sum=0;
    cin>>binary;
    while(binary) {
        sum= sum +  binary%10 * pow(2,i);
        i++;
        binary=binary/10;
    }
    cout<<sum;
}