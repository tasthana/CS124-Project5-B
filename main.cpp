#include <iostream>
#include "subscribe.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include "string.h"

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

string getKey(Subscribe subs){
    return (subs.getChannel());
}

string getKey2(Subscribe subs){
    return to_string(subs.getRank());
}
// main function
int main() {
    // entire file vector
    vector<Subscribe> subs;
    getDataFromFile("../topSubscribed.csv", subs);







};
