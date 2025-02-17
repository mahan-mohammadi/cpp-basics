#include <iostream>

using namespace std;

int main() {
    int money = 100;
    int ways =0;

    for (int n50 = 0; n50 * 50 <= money; ++n50) {
        for (int n25 = 0; n25 * 25 <= money - n50 * 50; ++n25) {
            for (int n10 = 0; n10 * 10 <= money - n50 * 50 - n25 * 25; ++n10) {
                for (int n5 = 0; n5 * 5 <= money - n50 * 50 - n25 * 25 - n10 * 10; ++n5) {
                    int r = money - n50 * 50 - n25 * 25 - n10 * 10 - n5 * 5;
                    if (r % 2 == 0) {
                        
                        int n2 = r / 2;
                        ways++;
                        cout << n2 << "*2 " << n5 << "*5 " << n10 << "*10 " << n25 << "*25 " << n50 << "*50 " << endl;
                    }
                }
            }
        }
    }

    cout << ways << " different ways" << endl;
    return 0;
}