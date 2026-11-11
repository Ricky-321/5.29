#include <stdio.h>

int lcm(int a, int b);
int gcd(int a, int b);

int main() {
    int num1, num2;

    printf("輸入兩整數: ");
    scanf("%d%d", &num1, &num2);
    int result = lcm(num1, num2);
    printf("%d和%d的lcm是%d", num1, num2, result);
    return 0;
}
int gcd(int a, int b) { //輾轉相除法
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}