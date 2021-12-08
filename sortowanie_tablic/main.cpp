#include <iostream>
using namespace std;

void pierwsze()
{
    int tab[5]={9,3,8,2,6};
    
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (tab[i]<tab[j])
                swap(tab[i], tab[j]);
        }
    }
    
    
    for (int z=0; z<5; z++)
    {
        cout << tab[z] <<endl;
    }
    
}

void drugie()
{
    int temp=0;
    
    int tab[5]={9,3,8,2,6};
    
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (tab[i]<tab[j])
                {
                    temp=tab[i];
                    tab[i]=tab[j];
                    tab[j]=temp;
                }
        }
    }
    
    for (int z=0; z<5; z++)
    {
        cout << tab[z] <<endl;
    }
    
}

void zamiana(int &x, int &y)
{
    int temp=0;
    
    temp=x;
    x=y;
    y=temp;
}


void sortowanie_tablicy(int tab[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (tab[i]<tab[j])
                zamiana(tab[i], tab[j]);
        }
    }
    
    wypisywanie_tablicy(tab, n);
}

void wypisywanie_tablicy(int tab[], int n)
{
    for (int z=0; z<n; z++)
    {
        cout << tab[z] <<endl;
    }
}



int main() {
    int a=10,b=20;
    int tab[5]={9,3,8,2,6};
    
    pierwsze();
    cout << endl;
    drugie();
    cout << endl;
    zamiana(a,b);
    cout << endl;
    sortowanie_tablicy(tab, 5);
    return 0;
}
