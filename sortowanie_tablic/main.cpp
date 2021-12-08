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


int main() {
    
    pierwsze();
    drugie();
    
    
    return 0;
}
