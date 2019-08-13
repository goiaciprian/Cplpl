#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <curl>
using namespace std;

string wikiAnswer(string searchWord) {
    stringstream line = (stringstream)searchWord;
    string temp, searchLine;
    vector<string> words;
    string __api__ = "https://ro.wikipedia.org/w/api.php?action=opensearch&search=";

    const char delim = ' ';

    while(getline(line, temp, delim)) {
        words.push_back(temp);
    }
    for(auto word: words) {
        if(word != words[0]) {
            string tempo = "_" + word;
            searchLine += tempo;
        } else {
            searchLine += word;
        }
    }

    __api__ += searchLine;

    return __api__;
};


int main(int argc, char* argv[]) {
    try {
        if(not argv[1]) { throw 1;}
        string test = wikiAnswer(argv[1]);
        cout << test;
    } catch(int) {
        cout << "Syntax: wikiSearch.exe <searchWord> " << endl;;
    }

    return 0;
}
