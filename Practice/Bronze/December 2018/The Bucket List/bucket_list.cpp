// The Bucket List - Bronze - December 2018 - Practice

#include <iostream>
#include <fstream>

using namespace std;

template <typename Function>
void testCases(Function myAlg) {
    string in = "blist_bronze_dec18/in";
    string out = "blist_bronze_dec18/out";
    // check each test case
    for (int i = 1; i <= 10; i++) {
        // read my code's output using algorithm that returns correctly formatted string
        string myOutput = myAlg(in.append(to_string(i)));

        // read correct output from test cases
        string correctOutput;

        fstream answer;
        answer.open(out.append(to_string(i)));
        string line;
        while (readline(line)) {
            correctOutput.append(line);
        }
        answer.close();

        // print results to console
        if (myOutput == correctOutput)
            cout << "SUCCESS: case " + to_string(i) + " passed" << endl;
        else
            cout << "ERROR: case " + to_string(i) + " failed" << endl;
    }
}

int main() {

    return 0;
}
