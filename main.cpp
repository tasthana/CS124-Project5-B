#include <iostream>
#include "subscribe.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include "string.h"
#include "SeparateChaining.h"
#include "OpenAddressing.h"

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

    // ---------------------------------- start of project 5 code----------------------------------------- //

    // declare constant
    int numReads =0;

    // Separate Chaining Tables using key
    SeparateChaining<Subscribe> sepChain1(1000, getKey, numReads);
    SeparateChaining<Subscribe> sepChain2(1500, getKey, numReads);
    SeparateChaining<Subscribe> sepChain3(2000, getKey, numReads);
    SeparateChaining<Subscribe> sepChain4(2500, getKey, numReads);
    SeparateChaining<Subscribe> sepChain5(3000, getKey, numReads);

    // Separate Chaining Tables using key2
    SeparateChaining<Subscribe> sepChain6(1000, getKey2, numReads);
    SeparateChaining<Subscribe> sepChain7(1500, getKey2, numReads);
    SeparateChaining<Subscribe> sepChain8(2000, getKey2, numReads);
    SeparateChaining<Subscribe> sepChain9(2500, getKey2, numReads);
    SeparateChaining<Subscribe> sepChain10(3000, getKey2, numReads);

    // Quad Probing using key
    QuadraticProbing<Subscribe> quadProb1(1000, getKey);
    QuadraticProbing<Subscribe> quadProb2(1500, getKey);
    QuadraticProbing<Subscribe> quadProb3(2000, getKey);
    QuadraticProbing<Subscribe> quadProb4(2500, getKey);
    QuadraticProbing<Subscribe> quadProb5(3000, getKey);

    // Quad Probing using key2
    QuadraticProbing<Subscribe> quadProb6(1000, getKey2);
    QuadraticProbing<Subscribe> quadProb7(1500, getKey2);
    QuadraticProbing<Subscribe> quadProb8(2000, getKey2);
    QuadraticProbing<Subscribe> quadProb9(2500, getKey2);
    QuadraticProbing<Subscribe> quadProb10(3000, getKey2);


     // open the file
    ofstream f_out;
    f_out.open("../sepchain1.csv");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain1.insert(subs[i], numReads);
        if (f_out) {
            // use get num reads function
            f_out << "SepChain 1000" << "  ";
            f_out << numReads << endl;
        }
    }





}
