#pragma once

int MyMax(int a, int b)
{
    return (a > b) ? a : b;
}

int MyMin(int a, int b)
{
    return (a < b) ? a : b;
}

double MyAverage(int a, int b)
{
    return (static_cast<double>(a) + static_cast<double>(b)) / 2.0;
}

int MyAdd(int a, int b)
{
    return a + b;
}

int MyMinus(int a, int b)
{
    return a - b;
}

int MyMultiply(int a, int b)
{
    return a * b;
}
