#include <iostream>
#include <stdio.h>
#include <cmath>


using namespace std;

int main()
{
  int num;
   cout << "Give me a value: " << endl; 
   cin >> num;
   
    if (num > 0){
        cout << sqrt(num) << endl;
    }
    else { cout << "The input is invalid." << endl;
    }
   
   return 0;
}



