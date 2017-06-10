#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

double function(int a, int b, int c, double x)
{
    return ((a * x * x) + (b * x) + c);
}

int main()
{
    //declare vars
    int a, b, c;
    double z;
    
   cout << "Input the coefficients (integers) of the first quadratic polynomial f: " << endl; 
   
   cin >> a >> b >> c;
   
   printf("The quadratic polynomial is f(x)=%dx*x+%dx+%d\n", a, b, c);
   
   cout << "Enter a point (double) z: " << endl;
   
   cin >> z;
   
   printf("f(z)= %f", function(a, b, c, z));
   
   return 0;
}

