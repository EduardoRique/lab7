/**
* @file     tarefa1.cpp
* @brief 	Arquivo de corpo da tarefa1
* @author   Eduardo Rique (luiseduardorique@gmail.com)
* @since    07/06/2017
* @date     08/06/2017
*/

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

/**
 * @brief Funcao que calcula a media de um intervalo
 * @param it1 inicio do intervalo
 * @param it1 final do intervalo
 * @param v container com o intervalo
 * @return elemento mais proximo da media
 */
template<typename InputIterator>
InputIterator closest2mean(InputIterator it1, InputIterator it2, vector<int> v){
    
    int media = accumulate(it1, it2, 0)/v.size();
    
    vector<int>::iterator it;
    it = it1;
    vector<int>::iterator maisprox = it;

    for (it = it1; it != it2; ++it) {
        if(media > *it){
            if(media - *it <= media - (*maisprox)) maisprox = it;
        }
        else{
            if(*it - media <= media - (*maisprox)) maisprox = it;
        }
}
    
    return maisprox;

}

/**
* @brief        Função principal do programa
* @return		Retorno
*/

int main(){
    
    vector<int> v { 1, 2, 3, 30, 40, 50 };
    auto result = closest2mean(v.begin(), v.end(), v);
    cout << (*result) << endl;

    return 0;
}