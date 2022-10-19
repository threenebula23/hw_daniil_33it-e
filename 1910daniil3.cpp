#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{
    cout<<"введите слово"<<endl;
    string word;
    getline(cin, word);
    string word1;
    for(int i=0 ; i<=(word.length()-1) ; i++)
        {
            char simfol = tolower(word[i]);
            word1 += simfol;

        }
    char simfol = word1[0];
    int sofpodenii = 1;
    for(int g=1 ; g<=(word1.length()-1) ; g++)
    {
        if(simfol==word1[g])
            sofpodenii+=1;

    }

    cout<<"кол-во совпадений "<<simfol<<" равна "<<sofpodenii;
    return 0;
}