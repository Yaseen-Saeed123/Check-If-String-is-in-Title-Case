#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> extract_words(string str){
    if(str[str.size() -1] != ' '){
        str += " ";
    }
    vector<string> words;
    string result;
    for (char c : str){
        if(c == ' '){
            words.push_back(result);
            result ="";
            continue;
        }
        result.push_back(c);
    }
    return words;
}
void check_first(string str){
    vector<string> words = extract_words(str);
    for (string word: words){
        if (word[0] >= 'A' && word[0] <= 'Z'){
            continue;
        }
        else{
            cout << "The word " << word << " Contains a first small letter " << word[0];
            return;
        }
    }
    cout << "All First letters of given string are capitalized";
    return;
}
int main() {
    // Test Function
    check_first("I Love Real Madrid");
    // Output: All First letters of given string are capitalized
    cout << "\n=========\n";
    check_first("I Love Real madrid");
    // Output: The word madrid Contains a first small letter m
    return 0;
}