#include <iostream>
using namespace std;

int main(){
    int num1=0, num2=1;
    int input;
    cout<<"Enter a number: ";
    cin>>input;
    cout << num1 << endl;

    for(int i=1;i<input;i++) {
        int temp = num2;
        num2=num1+num2;
        num1=temp;
        cout << num1 << endl;
    }
    return 0;
}
