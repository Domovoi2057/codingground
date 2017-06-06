// 6-Jun-2017
#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <stdio.h>

double dist(int x1, int y1, int x2, int y2)  //distance function between two points
       { 
           double r = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
        return r;
        }

double perimeter(int x1, int y1, int x2, int y2, int x3, int y3) //perimeter of triangle
        {
            //length of first side
            double s1 = dist(x1, y1, x2, y2); //distance between points 1 and 2
            double s2 = dist(x2, y2, x3, y3); //distance between point 2 and 3
            double s3 = dist(x3, y3, x1, y1); //distance between points 3 and 1
            
            return s1+s2+s3;
        }

int main()
{
    int x1, x2, x3, y1, y2, y3;
    double p;
    
    cout  <<"Enter the coordinates of the vertices of a triangle." << endl;
    cout << "x-coordinate of first vertice:"<< endl;
    cin>>x1;
    cout << "y-coordinate of first vertice:" << endl;
    cin>>y1;
    cout << "x-coordinate of second vertice:" << endl;
    cin>>x2;
    cout << "y-coordinate of second vertice:" << endl;
    cin>>y2;
    cout << "x-coordinate of third vertice:" << endl;
    cin>>x3;
    cout << "y-coordinate of third vertice:"<< endl;
    cin>>y3;
    
    p = perimeter(x1, y1, x2, y2, x3, y3);
    
    cout <<"The perimeter of the triangle is "<< p << endl;
    
    
    
return 0;
}

