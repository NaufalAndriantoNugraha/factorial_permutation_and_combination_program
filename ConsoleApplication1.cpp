#include <iostream>

int factorial(int n) 
{
    int fact = 1;

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else if (n < 0)
    {
        std::cout << "Negative integers does not exist in factorial!" << std::endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }
}

int permutation(int n, int r)
{   
    int firstParameterFactorial = factorial(n);
    int numerator = firstParameterFactorial;
    int theSubstractionOfFirstParameterAndSecondParameter = n - r;
    int denominator = factorial(theSubstractionOfFirstParameterAndSecondParameter);
    int result = numerator / denominator;
    return result;
}

int combination(int n, int r)
{
    int firstParameterFactorial = factorial(n);
    int numerator = firstParameterFactorial;
    int theSubstractionOfFirstParameterAndSecondParameter = n - r;
    int denominator = factorial(theSubstractionOfFirstParameterAndSecondParameter) * firstParameterFactorial;
    int result = numerator / denominator;
    return result;
}

int main()
{
    std::cout << factorial(5) << std::endl;
    std::cout << permutation(5, 2) << std::endl;
    std::cout << combination(5, 2) << std::endl;
    std::cin.get();
}

// In the future, to open this project again, go to File > Open > Project and select the .sln file
