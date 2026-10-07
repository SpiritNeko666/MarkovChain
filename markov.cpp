
#include <iostream>

#include <string>
#include "markov.h"
using namespace std;

string joinWords(const string words[], int startIndex, int count){
    string result = "";
    for (int i = 0; i < count; i++){
        
        result += " " + words[startIndex+i];
       

    }
    
    return result;   
}
