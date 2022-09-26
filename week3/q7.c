// A Short program that will load each element of an array, add 42 to it if 
// it is a negative number, and then store it back if it was modified.

#define N_SIZE 10

int main(void) {
    int i;
    int numbers[N_SIZE] = {0,1,2,-3,4,-5,6,-7,8,9};

    i = 0;
    
loop_start:
    if (i >= N_SIZE) goto end_loop;
    if (numbers[i] >= 0) goto non_negative;
    
    numbers[i] += 42;
    
non_negative:
    i++;
    goto loop_start;
    
end_loop:
    return 0;
}
