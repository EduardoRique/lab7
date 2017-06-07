#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){

    stack<int> stack;
    int first, second;

    string str, aux, op;
    getline(cin, str);
    for(unsigned int i=0; i < str.length(); i++){
        if(str[i] != ' '){
            aux = str[i];
            stack.push(stoi(aux));
        }
        else if(str[i] == ' '){
        i++;
        op = str[i];
        }
        
        first=stack.top();
        stack.pop();
        second=stack.top();
        stack.pop();

        if(op[0] == '+'){
            stack.push(first + second);
        }
        else if(op[0] == '-'){
            stack.push(first - second);
        }
        else if(op[0] == '*'){
            stack.push(first * second);
        }
        else if(op[0] == '/'){
            stack.push(first / second);
        }
        
    }
    cout << stack.top() << endl;
    cout << endl;

    return 0;
}