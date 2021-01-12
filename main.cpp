#include <iostream>
using namespace std;

int main() {
  string word;
  int wordLength;
  cout << "Please enter a word: \n";
  cin >> word;
  wordLength = word.length();
  int n=wordLength-1;
  for(int i=0;i<(wordLength/2);i++){
      swap(word[i],word[n]);
      n = n-1;
  }
  cout<<word;
}