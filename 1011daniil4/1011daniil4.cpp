#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    vector <double> a(100);
    int n1;
    int sum1=0;
    fin >> n1;
    vector <double> a1(n1);
    for(int i=0;i<n1;i++)
    {
        int x;
        fin>>x;
        a1[i]=x;
        sum1+=x;
    }
    int n2;
    int sum2=0;
    fin >> n2;
    vector <double> a2(n2);
    for(int i=0;i<n2;i++)
    {
        int x;
        fin>>x;
        a2[i]=x;
        sum2+=x;
    }

    if(sum1>sum2)
        cout<<"первая команда осутствула больше";
    else
    {
        if(sum1<sum2)
            cout<<"вторая команда осутствула больше";
        else
            cout<<"штрафное время у обоих команд одинаково";
    }
    return 0;
}


