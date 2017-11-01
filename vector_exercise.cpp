//
// Created by Jay on 2017/11/1.
//
#include "vector_exercise.h"

bool divby5(int x) {

    return x % 5 ? 0 : 1;

}

void test_find_if() {


    vector<int> v(30);

    cout << "可变数组的大小为：" << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {

        v[i] = (i + 1) * (i + 3);

        cout << v[i] << ' ';

    }

    cout << endl;

    vector<int>::iterator ilocation;

    ilocation = find_if(v.begin(), v.end(), divby5);

    if (ilocation != v.end())

        cout << "找到第一个能被5整除的元素：" << *ilocation << endl << "元素的索引位置是： " << ilocation - v.begin() << endl;


}

void search_sub() {
    vector<int> v1;

    cout << "v1:";

    for (int i = 0; i < 5; i++) {

        v1.push_back(i + 5);

        //注意：v1定义时没有给定大小，因此这里不能直接使用赋值语句。

        cout << v1[i] << ' ';

    }

    cout << endl;

    vector<int> v2;

    cout << "v2:";

    for (int i = 0; i < 2; i++) {

        v2.push_back(i + 7);

        cout << v2[i] << ' ';

    }

    cout << endl;

    vector<int>::iterator ilocation;

    ilocation = search(v1.begin(), v1.end(), v2.begin(), v2.end());
    if (ilocation != v1.end())

        cout << "v2的元素包含在v1中，起始元素为" << "v1[" << ilocation - v1.begin() << ']' << endl;

    else

        cout << "v2的元素不包含在v1中" << endl;

}

void search_sub_n(){
    vector<int> v;

    v.push_back(1);

    v.push_back(8);

    v.push_back(8);

    v.push_back(8);

    v.push_back(6);

    v.push_back(6);

    v.push_back(8);

    for (int j = 0; j < v.size(); ++j) {
        cout<<v[j]<<",";
    }
    cout<<endl;
    vector<int>::iterator i;

    i=search_n(v.begin(),v.end(),3,8);

    if(i!=v.end())

        cout<<"在v中找到3个连续的元素8"<<endl;

    else

        cout<<"在v中未找到3个连续的元素8"<<endl;
}


