
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

int buildMarkovChain(const string words[], int numWords, int order, string prefixes[], string suffixes[], int maxChainSize){

    if (order < 1 || order > 3||numWords <= order || maxChainSize <=0){
        return 0;
    }else{
        int count = 0;
        for (int i = 0; i < numWords - order && count < maxChainSize; i++){
            string prefix = joinWords(words, i, order);
            string suffix = words[i + order];
            prefixes[count] = prefix;  suffixes[count] = suffix;
            count++;


        }
        return count;
    }

    

}
