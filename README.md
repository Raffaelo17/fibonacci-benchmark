# Fibonacci Benchmark

## About


### Fibonnaci is the sequence follows the rule that each number is equal to the sum of the preceding two numbers.

![Alt text](./Images/image2.png)

## Iterative and Recursive
#
### Iterative
to do something again and again and again to improve it results

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
we first check if the number n is zero or one. If yes, we return the value of n. If not, we recursively call fibonacci with the values n-1 and n-2.
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
Benchmarking is a way to analyze statistical learning algorithms on one or more data sets in which they are able to compare a set of algorithms to find the best approach for an algorithm, the fastest and the most efficient one.

## Time Complexity
 the amount of time taken by an algorithm to run

### Iterative

To run:
```sh
gcc -o mylib.o -c mylib/mylib.c  
gcc -o main_b_time_iterative.exe main_b_time_iterative.c mylib.o
./main_b_time_iterative.exe
```

output:

![test](./Images/image5.png)


### Recursive

To run:
```
gcc -o mylib.o -c mylib/mylib.c
gcc -o main_b_time_recursive.exe main_b_time_recursive.c mylib.o
./main_b_time_iterative.exe
```

output:
![Alt text](./Images/image4.png)

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
![Alt text](./Images/image3.jpg)

These are tested using the same N which is 1000, So, iterative takes lesser space with only 0.4 MB of memory needed to run while recursive method needed 0.7 MB to run

(seen based on the memory)



## Conclusion
in conclusion, Iterative method requires lesser space and time to solve rather than the recursive method.
