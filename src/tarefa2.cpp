/**
* @file     tarefa2.cpp
* @brief 	Arquivo de corpo da tarefa2
* @author   Eduardo Rique (luiseduardorique@gmail.com)
* @since    07/06/2017
* @date     08/06/2017
*/

#include <iostream>
#include <set>

using namespace std;

/**
 * @brief Funcao que imprime os elementos de um container
 * @param collection container
 * @param label frase
 * @param separator separador
 */
template<typename TContainer>
void print_elementos(const TContainer& collection, const char* label="", const char separator=' '){
    cout << label;
    
    set<int>::iterator it;
    for (it = collection.begin(); it != collection.end(); ++it){
        cout << *it;
        cout << separator;
    }
    cout << endl;
}

/**
* @brief        Função principal do programa
* @return		Retorno
*/
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