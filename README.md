# Fibonacci Benchmark

## About


## Iterative and Recursive
#
### Iterative
Since we utilize only three variables to hold the previous two Fibonacci numbers in order to get the following and subsequent Fibonacci numbers, our time complexity in this case is O(N) and our space complexity is constant.

```c
int fibonacciIterative(int N){
int F0 = 0;
    int F1 = 1;
    int F2;

    if (N == 0){
        return F0;
    }
    else if (N == 1){
        return F1;
    } 
    else {
        for(int i=2; i <= N; i++){
            F2 = F0 + F1;
            F0 = F1;
            F1 = F2;
        }
        return F2;
    }}
```
### Recursive
Because each recursion would call two more, making the Time Complexity Exponential, if n > 1, then T(n) = T(n-1) + T(n-2)
Although space appears to be constant, there is always a lot going on in the background since stack memory is consumed with each call.
```c
int fibonacciRecursive(int N){
    if (N == 0){
        return 0;
    }
    else if (N == 1){
        return 1;
    }
    else{
        return fibonacciRecursive(N-1) + fibonacciRecursive(N-2);
    }
}
```



To run:
```sh
gcc -o mylib.o -c mylib/mylib.c
gcc -o main.exe main.c mylib.o
./main.exe
```

output:
```
F(3) Iterative = 2
F(3) Recursive = 2
```

## Benchmarking
Benchmarking is provides crucial information to assist you understand how your firm compares with similar organizations, even if they are in a different business or have a different group of clients.

## Time Complexity
 the amount of time taken by an algorithm to run

### Iterative

To run:
```sh
gcc -o mylib.o -c mylib/mylib.c  
gcc -o main_b_time_iterative.exe main_b_time_iterative.c mylib.o
./main_b_time_iterative.out
make; ./main_test.out
```

output:
(./Images/image1.png)




### Recursive

To run:
```
gcc -o mylib.o -c mylib/mylib.c
gcc -o main_b_time_recursive.exe main_b_time_recursive.c mylib.o
./main_b_time_iterative.out
make time
```

output:
(./Images/image2.png)



These are tested using the same N which is 30, So, iterative is much more faster with 0.000004 seconds needed to run while recursive method needed 0.018000


## Space Complexity
the total amount of memory space used
## Recursive vs iterative
To run:
```sh
gcc -o main_b_space_recursive.exe main_b_space_recursive.c mylib.o
./main_b_space_recursive.exe

gcc -o main_b_space_iterative.exe main_b_space_iterative.c mylib.o
./main_b_space_iterative.exe
```

## Results (N = 1000):

These are tested using the same N which is 1000, So, iterative takes lesser space with only 0.4 MB of memory needed to run while recursive method needed 0.7 MB to run

(seen based on the memory)



## Conclusion
in conclusion, Iterative method requires lesser space and time to solve rather than the recursive method. Iterative method is the fastest as well as memory efficient as we store only the last two values.
