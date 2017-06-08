/**
* @file     tarefa4.cpp
* @brief 	Arquivo de corpo da tarefa4
* @author   Eduardo Rique (luiseduardorique@gmail.com)
* @since    08/06/2017
* @date     08/06/2017
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * @brief Funcao que descobre se um elemento é primo
 * @param x inteiro para descoberta
 * @return booleano com o resultado
 */
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

/**
* @brief        Função principal do programa
* @return		Retorno
*/
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