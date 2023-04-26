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
    SeparateChaining<Subscribe> sepChain1(923, getKey, numReads);
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
    QuadraticProbing<Subscribe> quadProb1(923, getKey);
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


     // open file 1 and insert num Reads
    ofstream f_out;
    f_out.open("../sepchain1.csv");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain1.insert(subs[i], numReads);
        if (f_out) {
            // use get num reads function
            f_out << "SepChain 918" << " : ";
            f_out << numReads << endl;
        }
        numReads = 0;
    }
    f_out.close();


    // open file 2 and insert num Reads
    ofstream f_out2;
    f_out2.open("../sepchain2.csv");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain2.insert(subs[i], numReads);
        if (f_out2) {
            // use get num reads function
            f_out2 << "SepChain 1500" << " : ";
            f_out2 << numReads << endl;
        }
        numReads = 0;
    }
    f_out2.close();


    // open file 3 and insert num Reads
    ofstream f_out3;
    f_out3.open("../sepchain3.csv ");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain3.insert(subs[i], numReads);
        if (f_out3) {
            // use get num reads function
            f_out3 << "SepChain 2000" << " : ";
            f_out3 << numReads << endl;
        }
        numReads = 0;
    }
    f_out3.close();


    // open file 4 and insert num Reads
    ofstream f_out4;
    f_out4.open("../sepchain4.csv ");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain4.insert(subs[i], numReads);
        if (f_out4) {
            // use get num reads function
            f_out4 << "SepChain 2500" << " : ";
            f_out4 << numReads << endl;
        }
        numReads = 0;
    }
    f_out4.close();


    // open file 5 and insert num Reads
    ofstream f_out5;
    f_out5.open("../sepchain5.csv ");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain5.insert(subs[i], numReads);
        if (f_out5) {
            // use get num reads function
            f_out5 << "SepChain 3000" << " : ";
            f_out5 << numReads << endl;
        }
        numReads = 0;
    }
    f_out5.close();


    // open file 6 and insert num Reads
    ofstream f_out6;
    f_out6.open("../sepchain6.csv ");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain6.insert(subs[i], numReads);
        if (f_out6) {
            // use get num reads function
            f_out6 << "SepChain 1000" << " : ";
            f_out6 << numReads << endl;
        }
        numReads = 0;
    }
    f_out6.close();


    // open file 7 and insert num Reads
    ofstream f_out7;
    f_out7.open("../sepchain7.csv ");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain7.insert(subs[i], numReads);
        if (f_out7) {
            // use get num reads function
            f_out7 << "SepChain 1500" << " : ";
            f_out7 << numReads << endl;
        }
        numReads = 0;
    }
    f_out7.close();


    // open file 8 and insert num Reads
    ofstream f_out8;
    f_out8.open("../sepchain8.csv ");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain8.insert(subs[i], numReads);
        if (f_out8) {
            // use get num reads function
            f_out8 << "SepChain 2000" << " : ";
            f_out8 << numReads << endl;
        }
        numReads = 0;
    }
    f_out8.close();


    // open file 9 and insert num Reads
    ofstream f_out9;
    f_out9.open("../sepchain9.csv ");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain9.insert(subs[i], numReads);
        if (f_out9) {
            // use get num reads function
            f_out9 << "SepChain 2500" << " : ";
            f_out9 << numReads << endl;
        }
        numReads = 0;
    }
    f_out9.close();


    // open file 10 and insert num Reads
    ofstream f_out10;
    f_out10.open("../sepchain10.csv ");

    // Single loop to add everything into tables
    for (int i = 0; i < subs.size(); i++) {
        sepChain10.insert(subs[i], numReads);
        if (f_out10) {
            // use get num reads function
            f_out10 << "SepChain 3000" << " : ";
            f_out10 << numReads << endl;
        }
        numReads = 0;
    }
    f_out10.close();



    // open quad file 1
    ofstream f_outQ1;
    f_outQ1.open("../QuadProb1.csv ");

    // Single loop to add everything into tables
    for (int i = 100; i < subs.size(); i++) {
        quadProb1.insert(subs[i], numReads);
        if (f_outQ1) {
            // use get num reads function
            f_outQ1 << "Quad Prob 1000" << " : ";
            f_outQ1 << numReads << endl;
        }
        numReads = 0;
        cout << "hello" << endl;
        cout << i << endl;
    }
    f_outQ1.close();





}
