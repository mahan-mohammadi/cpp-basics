#include <iostream>
using namespace std;

int main(){
    int number ,newnumber , sum;
    cout<<"Enter a number: ";
    cin>>number;

    while(number) {
        newnumber = number%10;
        number = number/10;
        sum = sum*10 + newnumber;
    }
    cout<<"New number is: "<<sum<<endl;
    return 0;
}
