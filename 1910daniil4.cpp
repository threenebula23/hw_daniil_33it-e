#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{
    cout<<"введите 2 слова"<<endl;
    string word1 , word2;
    if(word1[0]==word2[0])
        {
            cout<<"одинаковы и имеют одинаковый регистор";
            return 0;
        }
    if(tolower(word1[0])==tolower(word2[0]))
        {
            cout<<"одинаковы, но имеют неодинаковый регистор";
            return 0;
        }
    else
        {
            cout<<"имеют абсолютно неодинкавые буквы";
            return 0;
        }
}