#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ofstream fout("outstream.txt");
    vector <double> a(100);
    double sum =0;
    for(int i=0;i<100;i++)
        {
            double x = (rand()%1000);
            a[i]=x/1000;
            sum+=x/1000;
            fout<<a[i]<<" ";
        }

    fout<<endl;
    fout<<sum/100;
}