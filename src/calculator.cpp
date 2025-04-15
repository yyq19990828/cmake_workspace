#include <iostream>

// 数学函数声明
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);

int main() {
    double a = 10.5;
    double b = 2.5;
    
    std::cout << "简单计算器示例" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << subtract(a, b) << std::endl;
    std::cout << a << " * " << b << " = " << multiply(a, b) << std::endl;
    std::cout << a << " / " << b << " = " << divide(a, b) << std::endl;
    std::cout << a << " ^ " << b << " = " << power(a, b) << std::endl;
    
    return 0;
}