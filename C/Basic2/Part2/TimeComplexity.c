#include <stdio.h>
#include <time.h>
#include <math.h>
// Time complexity with clock () from time.h

int is_prime_sqrt(int n){
    if(n<=1)return 0;
    if(n==2) return 1;
    if(n % 2 ==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n % i==0) return 0;
    }
    return 1;
}

int is_prime_n(int n){
    if(n<=1) return 0;
    for(int i=2;i<n;i++){
        if(n % i==0) return 0;
    }
    return 1;
}

int main(){
    int range=100000;

    //For O(n)
    clock_t start_n=clock();
    int count_n=0;
    for(int i=2;i<=range;i++){
        if(is_prime_n(i)) count_n++;
    }
    clock_t end_n=clock();
    double time_n =(double)(end_n-start_n)/CLOCKS_PER_SEC;

    //For O(sqrt(n))
    clock_t start_sqrt = clock();
    int count_sqrt = 0;
    for (int i = 2; i <= range; i++) {
        if (is_prime_sqrt(i)) count_sqrt++;
    }
    clock_t end_sqrt = clock();
    double time_sqrt = (double)(end_sqrt - start_sqrt) / CLOCKS_PER_SEC;


    printf("\n--- Prime Test Results up to %d ---\n", range);
    printf("O(n)      : Primes found: %d | Time taken: %.5f seconds\n", count_n, time_n);
    printf("O(sqrt(n)): Primes found: %d | Time taken: %.5f seconds\n", count_sqrt, time_sqrt);

    return 0;
}