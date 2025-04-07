#include "RPN.hpp"

RPN::RPN() {
    error("");
}

RPN::RPN(std::string str) {
    calculate(str);
}

RPN::~RPN() {
}

RPN::RPN(const RPN &src) {
    *this = src;
}

RPN &RPN::operator=(const RPN &src) {
    if (this != &src) {
        stack = src.stack;
    }
    return *this;
}

void RPN::calculate(std::string str) {
    std::string::size_type i = 0;
    while (i < str.length()) {
        if (str[i] == ' ')
            i++;
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%') {
            if (stack.size() < 2) {
                error("size");
                return;
            }
            if (str[i] == '+')
                add();
            else if (str[i] == '-')
                sub();
            else if (str[i] == '*')
                mul();
            else if (str[i] == '/')
                div();
            else if (str[i] == '%')
                mod();
            i++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            int n = atoi(&str[i]);
            i++;
            push(n);
            if (str[i] >= '0' && str[i] <= '9'){
                error("Too many digit or Bad argumants");
                return;
            }
            
        }
        else {
            error("Bad input");
            return;
        }
    }
    print();
}

void RPN::push(int n) {
    stack.push(n);
}

void RPN::pop() {
    if (stack.size() == 0) {
        error("size");
        return;
    }
    stack.pop();
}

void RPN::add() {
    int a;
    int b;
    if (stack.size() < 2) {
        error("size");
        return;
    }
    a = stack.top();
    stack.pop();
    b = stack.top();
    stack.pop();
    stack.push(b + a);
}

void RPN::sub() {
    int a;
    int b;
    if (stack.size() < 2) {
        error("size");
        return;
    }
    a = stack.top();
    stack.pop();
    b = stack.top();
    stack.pop();
    stack.push(b - a);
}

void RPN::mul() {
    int a;
    int b;
    if (stack.size() < 2) {
        error("size");
        return;
    }
    a = stack.top();
    stack.pop();
    b = stack.top();
    stack.pop();
    stack.push(b * a);
}

void RPN::div() {
    int a;
    int b;
    if (stack.size() < 2) {
        error("size");
        return;
    }
    a = stack.top();
    stack.pop();
    b = stack.top();
    stack.pop();
    if (a == 0) {
        error("/0");
        return;
    }
    stack.push(b / a);
}

void RPN::mod() {
    int a;
    int b;
    if (stack.size() < 2) {
        error("size");
        return;
    }
    a = stack.top();
    stack.pop();
    b = stack.top();
    stack.pop();
    if (a == 0) {
        error("%0");
        return;
    }
    stack.push(b % a);
}

void RPN::print() {
    if (stack.size() != 1) {
        error("Calculate");
        return;
    }
    std::cout << stack.top() << std::endl;
}

void RPN::error(std::string error) {
    std::cout << "Error: " << error << std::endl;
}




