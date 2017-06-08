/**
* @file     tarefa3.cpp
* @brief 	Arquivo de corpo da tarefa3
* @author   Eduardo Rique (luiseduardorique@gmail.com)
* @since    08/06/2017
* @date     08/06/2017
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

/**
* @brief        Função principal do programa
* @return		Retorno
*/
int main(){

    stack<int> stack;
    int first, second;

    string str, op, aux = "";
    getline(cin, str);
    for(unsigned int i=0; i < str.length(); i++){        
        if(str[i] == ' '){
            if(str[i-1] == '+' || str[i-1] == '-' || str[i-1] == '*' || str[i-1] == '/'){
            }
            else{
                stack.push(stoi(aux));
                aux = "";
            }
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
            aux += str[i];
        }
        
        
        
    }
    cout << stack.top() << endl;

    return 0;
}