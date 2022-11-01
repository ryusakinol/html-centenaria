#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	float k=1.5;
	float j=3.5;
	float l=2.5;
    float n=5.0;
    float m=0.5; 
    int b= 10;
    n += 3*k && 2+ j || 5 - l || 5 + l && k-3*m;
    cout << n; 
    
}