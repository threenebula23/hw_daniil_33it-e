#include <cmath>
#include <iostream>
using namespace std;

int amstrong(int a, int b )
{
    int num = pow((a%(int)pow(10, b-1)) , b) , i = 1;
    while (i!=b) i++;
    {
        num+= pow(a%(int)pow(10, (b-1))-(a%(int)pow(10 , b)*10 ),b);
    }
    return num;
    
}



bool cheack(int n , int m)
{
    int nn = 1 , nm = 1, n1 =n , m1 = m ;
    if ((n==m) || (n>m)){
        return false;}
    while ((n1/=10) > 0) n++;
    while ((m1/=10) > 0) n++;

    if (n == amstrong(n , nn))
    {
        return false;}
    if (m == amstrong(m , nm))
    {
        return false;}
    else
    {
        return true;}

}

int main()
{
    cout << "space n and m" << endl;
    int n , m ;
    cin >>n >>m ;
    if (cheack(n, m)){
        for(n;n<= m; n++)
        {
            if (n > m){
                break;
            }
            else
            {
                cout<<n<<" ";
            }
        }
        }
    else
        cout << "incorrect number";


}