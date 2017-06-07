#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int closest2mean(vector<int>::iterator it1, vector<int>::iterator it2, vector<int> v){
    
    int media = accumulate(it1, it2, 0)/v.size();
    
    vector<int>::iterator it;
    it = it1;
    int maisprox = *it;

    for (it = it1; it != it2; ++it) {
        if(media > *it){
            if(media - *it <= media - maisprox) maisprox = *it;
        }
        else{
            if(*it - media <= media - maisprox) maisprox = *it;
        }
}
    
    return maisprox;

}


int main(){
    
    vector<int> v { 1, 2, 3, 30, 40, 50 };
    auto result = closest2mean(v.begin(), v.end(), v);
    cout << result << endl;

    return 0;
}