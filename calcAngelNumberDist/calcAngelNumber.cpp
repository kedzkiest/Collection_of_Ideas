#include <iostream>
#include <string>
#include <vector>

using namespace std;

int calcAngelNumber(int y, int m, int d);

int main(void){
    int angelNumber;
    vector<int> angelNumbers(10, 0);
    
    for(int y = 1900; y <= 2022; y++){
        for(int m = 1; m <= 12; m++){
            for(int d = 1; d <= 31; d++){
                
                if(m == 2 && d == 29) break;
                if(((m == 4) || (m == 6) || (m == 9) || (m == 11)) && d == 31) break;
                
                
                angelNumber = calcAngelNumber(y, m, d);
                angelNumbers.at(angelNumber)++;
                //cout << "year: " << y << ", month: " << m << ", day: " << d << ", angelNumber: " << angelNumber << endl;
            }
        }
    }
    
    for(int i = 0; i < 10; i++){
        cout << "freq of angelNumber \"" << i << "\": " << angelNumbers.at(i) << endl;
    }
}

int calcAngelNumber(int y, int m, int d){
    string year = to_string(y);
    string month = to_string(m);
    string day = to_string(d);
    
    string baseString = year + month + day;

    int eachDigitSum;
    while(baseString.length() > 1){
        // to see the process
        //cout << baseString << endl;
        
        eachDigitSum = 0;
        for(int i = 0; i < baseString.length(); i++){
            eachDigitSum += (baseString[i] - '0');
        }

        baseString = to_string(eachDigitSum);
    }

    return eachDigitSum;
}