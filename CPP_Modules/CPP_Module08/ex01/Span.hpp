#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
private:
    unsigned int N;
    std::vector<int> v;
public:
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    
    void addNumbers(int max, int min);
    void addNumber(int n); 
    int shortestSpan(void);
    int longestSpan(void);
};

