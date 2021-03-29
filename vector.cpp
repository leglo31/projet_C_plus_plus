#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> tab;

	tab.push_back("fdas");
	tab.push_back("fdas2");     
    for(int i(0); i<tab.size(); ++i) 
        cout << tab[i] << endl;  

    return 0;
}
