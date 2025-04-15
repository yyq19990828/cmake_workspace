#include <cmath>

// 简单的数学工具函数
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        return NAN; // 返回非数值
    }
    return a / b;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}