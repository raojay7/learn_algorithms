#include <iostream>
#include <algorithm>
#include <vector>
#include "vector_exercise.h"
using namespace std;
int main(){
    /*
    int num_to_find=6;
    vector<int> v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(2*i);
    }
    vector<int>::iterator result;
    result=find(v1.begin(),v1.end(),num_to_find);
    if(result==v1.end())
        cout<<"未找到任何元素匹配"<<num_to_find<<endl;
    else
        cout<<"找到元素匹配"<<result-v1.begin()<<endl;
        */
    //test_find_if();
    //search_sub();
    search_sub_n();
    return 0;
}