N_SIZE = 10

main:
    # int i in $t0

    li  $t0, 0                  # i = 0;

loop_start:
    bge $t0, N_SIZE, end_loop   # if (i >= N_SIZE) goto end_loop;

    la  $t1, numbers            # $t1 contains base address
    mul $t2, $t0, 4             # $t2 contains offset
    add $t3, $t1, $t2           # $t3 contains &numbers[i]    
        

    lw  $t4, ($t3)              # $t4 contains numbers[i] 
    bgez $t4, non_negative      # if (numbers[i] >= 0) goto non_negative;
    
    add $t4, $t4, 42    
    sw  $t4, ($t3)              # numbers[i] += 42;
non_negative:
    add $t0, $t0, 1             # i++;
    j loop_start
end_loop:

    li  $v0, 0                  # return 0    
    jr  $ra

    .data 
numbers: .word 0,1,2,-3,4,-5,6,-7,8,9
