#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;
  
//given function
double func(double x)
{
    return x*x*x - 6*x + 4;
}
  
//After differntiation
double derivFunc(double x)
{
    return 3*x*x -6;
}
  
// find the root
void newtonRaphson(double x)
{
    double h = func(x) / derivFunc(x);
    while (abs(h) >= EPSILON)
    {
        h = func(x)/derivFunc(x);
        x = x - h;
    }
  
    cout << "The value of the root is : " << x;
}
  
int main()
{
    double x0,x1;
    cin >> x0>>x1;
    if(func(x0)*func(x1) >= 0){
        cout<<"invalid input";
    }
    else{
    newtonRaphson(x0);
    }
    return 0;
}