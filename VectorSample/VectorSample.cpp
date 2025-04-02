#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>    //add if using sort

int main()
{
    vector<int> num{ 10,11,12,13,14 };
    for (int i = 0; i < num.size(); i++)
    {
//        cout << num[i] << endl;
        cout << num.at(i) << endl;   //give value at position i
    }
    
    num.push_back(20);  //adds entry at the end of the vector
    cout << endl;
    for (int i = 0; i < num.size(); i++)
    {
        cout << num.at(i) << endl;
    }
    
    num.erase(num.begin(), num.end() - 3);  //erases entrie(s) at the given position
    cout << endl;
    for (int i = 0; i < num.size(); i++)
    {
        cout << num.at(i) << endl;
    }

    num.insert(num.begin() + 1, 600);   //adds an entry at the given position
    cout << endl;
    for (int i = 0; i < num.size(); i++)
    {
        cout << num.at(i) << endl;
    }

    num.at(2) = 800;    //changes the value of an entry at the given position
    cout << endl;
    for (int i = 0; i < num.size(); i++)
    {
        cout << num.at(i) << endl;
    }

    sort(num.begin(), num.end());   //sorts vector
    cout << endl;
    for (int i = 0; i < num.size(); i++)
    {
        cout << num.at(i) << endl;
    }
}