//
// Created by Jay on 2017/11/2.
//
#include "sort_exercise.h"
void test_heap(){
    vector<int> v;

    v.push_back(5);

    v.push_back(6);

    v.push_back(4);

    v.push_back(8);

    v.push_back(2);

    v.push_back(3);

    v.push_back(7);

    v.push_back(1);

    v.push_back(9);

    vector<int>::iterator ilocation;

    for(ilocation=v.begin();ilocation!=v.end();ilocation++)

        cout<<*ilocation<<' ';

    cout<<endl;

    //输出5 6 4 8 2 3 7 1 9

    make_heap(v.begin(),v.end());//将[start, end)范围进行堆排序，默认使用less, 即最大元素放在第一个。

    v.push_back(20);

    push_heap(v.begin(),v.end());//对刚插入的（尾部）元素做堆排序

    for(ilocation=v.begin();ilocation!=v.end();ilocation++)

        cout<<*ilocation<<' ';

    cout<<endl;
    //输出20 9 7 6 8 3 4 1 5 2

    pop_heap(v.begin(),v.end());//将front（即第一个最大元素）移动到end的前部，同时将剩下的元素重新构造成(堆排序)一个新的heap。

    for(ilocation=v.begin();ilocation!=v.end();ilocation++)

        cout<<*ilocation<<' ';

    cout<<endl;
    //输出9 8 7 6 2 3 4 1 5 20

}
