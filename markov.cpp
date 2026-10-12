
#include <iostream>
#include <fstream>
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

int readWordsFromFile(string filename, string words[], int maxWords){
    ifstream inputFile(filename);
    if (inputFile.is_open()){

        int counter = 0;
        while (counter < maxWords && inputFile >> words[counter]){

            counter++;

        }
        inputFile.close();
        return counter;

    }else{
        return -1;
    }

    
    
    
}
