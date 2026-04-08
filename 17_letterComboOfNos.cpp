#include <iostream>
#include <vector>
using namespace std;

void solve(string digit, string output, int index, vector<string> &ans, string mapping[]){

    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }
    
    int number = digit[index] - '0';
    string value = mapping[number];
}

int main(){ 


    return 0;


}


