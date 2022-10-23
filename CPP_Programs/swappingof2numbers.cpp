#include <iostream>
using namespace std;

int main()
{
	  int a , b , c;
    cout <<"enter the value of a :\n" ;
    cin >> a;
    cout << "enter the value of b :\n" ;
    cin >> b;
    
    cout<<"a and b values before swapping\n"<<a<<" "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"a and b valurs after swapping\n"<<a<<" "<<b;
    return 0;
}
