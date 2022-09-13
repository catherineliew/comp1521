#include <stdio.h>
#include <stdlib.h>

int factorial(int num);

// 5! = 5 * 4 * 3 * 2 * 1
// 5! = 5 * 4!

int main(void) {
    int x = factorial(5);
}

int factorial(int num) {
    // base case: when to stop
    if (num == 0) {
        return 1;
    }
    
    // recursive case: how to continue
    int result = num * factorial(num - 1);
    return result;
}
