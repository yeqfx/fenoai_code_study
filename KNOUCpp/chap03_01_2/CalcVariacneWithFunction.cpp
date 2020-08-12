#include <iostream>
#include "CalcVariacneWithFunction.h"
using namespace std;

double Variance(const double arr[], int n)
{
    double sum = 0, sqSum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        sqSum += arr[i] * arr[i];
    }

    return sqSum / n - sum * sum / (n * n);
}
