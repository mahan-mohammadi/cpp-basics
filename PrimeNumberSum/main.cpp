#include <iostream>
using namespace std;

int main(){
    int number,reminder;
    bool flag2 =true,flag1=true,flag3=false;
    cin>>number;
    for(int i=2;i<number;i++) {
        flag2 =true, flag1=true;
        reminder = number-i;
        for(int j=2;j<=reminder/2 && flag1;j++) {
            if(reminder%j==0) {
                flag1 = false;
            }
        }
        for(int j=2;j<=i/2 && flag2;j++) {
            if(i%j==0) {
                flag2 = false;
            }
        }
        if(flag1&&flag2) {
            cout << i << " " << reminder << endl;
        }
    }

}
