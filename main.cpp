#include <iostream>
#include "subscribe.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

// Vector function to perform addition calculation
int getTotalVideoCount(vector<Subscribe> subs)
{
    int total = 0;
    for (int i =0; i < subs.size(); i++)
    {
        total += subs[i].getVideoCount();

    }
    cout << "This is the total of all video counts :  " << endl;
    return total;

}

// main function
int main() {
    // entire file vector
    vector<Subscribe> subs;

    getDataFromFile("../topSubscribed.csv", subs);
    for (int i = 0; i < 1000; ++i)
    {
        cout << subs[i] << endl;
    }




};
