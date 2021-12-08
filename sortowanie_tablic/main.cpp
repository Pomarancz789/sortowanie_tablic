#include <iostream>
using namespace std;


int main() {
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
    
    return 0;
}
