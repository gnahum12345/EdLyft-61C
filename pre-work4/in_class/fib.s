.data
.word 2, 4, 6, 8
n: .word 3

.text
main:   add     t0, x0, x0 # clear what we had before. 
        addi    t1, x0, 1 # add integer. t1 = x0 + 1; 
        la      t3, n # we are loading the address of n. 
        lw      t3, 0(t3) # we are loading the word of n. 
        
# fib(n-1) + fib(n-2)... from the beginning --> iteratively.  
fib:    beq     t3, x0, finish # if t3 == x0 -> jump to finish. 
        add     t2, t1, t0 # t1 and t0 into t2. 
        mv      t0, t1 # move t1 into t0. 
        mv      t1, t2 # move t2 into t1. 
        addi    t3, t3, -1 # subtracting 1 from t3. 
        j       fib
finish: addi    a0, x0, 1 # adds 1 to a0. 
        addi    a1, t0, 0 # moves t0 to a1. 
        ecall # print integer ecall
        addi    a0, x0, 10 # a0 = 10; 
        ecall # terminate ecall


