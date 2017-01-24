#include<iostream>
#include<cstdlib>
using namespace std;

bool czy_pierwsza(int n)
{
    if(n<2)
        return false;

    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}

int main()
{
    int n;
    int ile;
    cin>>ile;
    {
        for(int i =0; i<ile; i++)
        {

            cin>>n;
            if   (czy_pierwsza(n))
            cout<<"TAK\n";
            else
                cout<<"NIE\n";
        }



    }


    return 0;
}
