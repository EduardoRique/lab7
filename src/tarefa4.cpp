#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool primo(int x){
    int p = 0;

    for(int i=1; i<=x; i++){
        if(x%i == 0){
            p++;
        }
    }
    if(p <= 2) return true;
    else return false;
}

int main(int argc, char* argv[]){

    int num;
    string aux;
    aux = argv[1];
    num = stoi(aux);

    vector<int> v;
    vector<int>::iterator it;

    int i=1;
    while(i <= num){
        v.push_back(i);
        i++;
    }

    for (it = v.begin(); it != v.end(); ++it){
        if(primo(*it)){
        cout << *it << " ";
        }
    } 
    cout << endl;
    return 0;
}