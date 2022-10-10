#include <stdio.h>
#include <assert.h>
#include <stdint.h>

#define INT_SIZE 32

typedef uint32_t Word;

Word reverseBits(Word w);

// testing
int main(void) {
    Word w1 = 0x01234567;
    // 0000 => 0000 = 0
    // 0001 => 1000 = 8
    // 0010 => 0100 = 4
    // 0011 => 1100 = C
    // 0100 => 0010 = 2
    // 0101 => 1010 = A
    // 0110 => 0110 = 6
    // 0111 => 1110 = E
    assert(reverseBits(w1) == 0xE6A2C480);
    printf("All tests passed!\n");
    return 0;
}

   
Word reverseBits(Word w) {

    Word result = 0;
    for (int i = 0; i < INT_SIZE; i++) {
        
        if (w & (1u << i)) { // check if bit is 1
        
            // set corresponding bit in result
            result |= (1u << (INT_SIZE - 1 - i));
        }
    }
    return result;

}