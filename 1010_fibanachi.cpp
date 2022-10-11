#include <iostream>

using namespace std;

int Fib(int i)
{
    if(i < 1) 
        return 0;

    if(i == 1)
        return 1;

    return Fib(i-1) + Fib(i - 2);

}

int main()
{   
    cout<<"введите n"<< endl;
    int n;
    cin>>n;
    for(int i=0; i <= n; i++)
        cout << Fib(i) <<" ";

    return 0;
}
