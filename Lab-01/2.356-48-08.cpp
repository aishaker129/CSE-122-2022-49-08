// problem-name-Way Too Long Words
// problem no-71A
#include <iostream>
using namespace std;

int main(){
    int t, i;
    string word;

    cin>>t;
    for(i = 1; i <= t; i++){
        cin>>word;
        if(word.length() > 10){
            cout << word[0] << word.length() - 2 << word[word.length() - 1] <<endl;
        }
        else{
            cout << word << endl;
        }
    }
    return 0;
}
