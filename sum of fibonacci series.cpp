#include <stdio.h>
int fibonacciSum(int n) 
{
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    int a = 0, b = 1, sum = 1;
    for (int i = 2; i <= n; i++) {
        int next = a + b;
        sum += next;
        a = b;
        b = next;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    int sum = fibonacciSum(n);
    printf("The sum of the first %d Fibonacci numbers is: %d\n", n, sum);
    return 0;
}
