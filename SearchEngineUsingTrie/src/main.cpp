#include <bits/stdc++.h>
#include <trie.cpp>
#include <utilis.cpp>
using namespace std;

void test();
int main(int argc , char **argv){
    string filename;
    Trie T;
    vector<string> data;
    if(arc > 1){
        filename = argv[1];
        data = get_array_from_file(filename);
    }
    else{
        cout<<"Enter File name to load data from. ( music | movies | words) :\n";
        cin>>filename;
        cerr<<"Loading....";
        data = get_array_from_file("../data/" + filename + ".txt");
        cerr<<"Done!\n";
    }
}