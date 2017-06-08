#include <iostream>
#include <set>

using namespace std;

template<typename TContainer>
void print_elementos(const TContainer& collection, const char* label="", const char separator=' '){
    cout << label;
    
    set<int>::iterator it;
    for (it = collection.begin(); it != collection.end(); ++it){
        cout << *it;
        cout << separator;
    }
}

int main() {
set<int> numeros;

numeros.insert(3);
numeros.insert(1);
numeros.insert(4);
numeros.insert(1);
numeros.insert(2);
numeros.insert(5);

print_elementos(numeros, "CSV Set: ", ';');

    return 0;
}