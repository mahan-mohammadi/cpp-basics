//
// Created by ThinkPad P50 on 2/16/2025.
//

#ifndef GCD_H
#define GCD_H

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}
#endif //GCD_H
