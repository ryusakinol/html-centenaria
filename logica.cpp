#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	char d='5';
    char c='f';
    int b= 10;
    int p = 4% b? ++c * d: d--*c;
    cout << p; 
}
