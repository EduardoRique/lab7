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
        if(str[i] == ' '){
            stack.push(stoi(aux));
        }
        else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
        
            op = str[i];

            first=stack.top();
            stack.pop();
            second=stack.top();
            stack.pop();

            if(op[0] == '+'){
                stack.push(first + second);
            }
            else if(op[0] == '-'){
                stack.push(second - first);
            }
            else if(op[0] == '*'){
                stack.push(first * second);
            }
            else if(op[0] == '/'){
                stack.push(second / first);
            }
            
        }
        else{
            aux = str[i];
            stack.push(stoi(aux));
        }
        
        
        
    }
    cout << stack.top() << endl;

    return 0;
}