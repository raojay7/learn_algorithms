//
// Created by Jay on 2017/11/1.
//
#include "vector_exercise.h"

void test_find(){
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
}


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

void search_sub_n() {
    vector<int> v;

    v.push_back(1);

    v.push_back(8);

    v.push_back(8);

    v.push_back(8);

    v.push_back(6);

    v.push_back(6);

    v.push_back(8);

    for (int j = 0; j < v.size(); ++j) {
        cout << v[j] << ",";
    }
    cout << endl;
    vector<int>::iterator i;

    i = search_n(v.begin(), v.end(), 3, 8);

    if (i != v.end())

        cout << "在v中找到3个连续的元素8" << endl;

    else

        cout << "在v中未找到3个连续的元素8" << endl;
}

void test_copy() {
    vector<int> v;

    v.push_back(1);

    v.push_back(3);

    v.push_back(5);


    list<int> l;

    l.push_back(2);

    l.push_back(4);

    l.push_back(6);

    l.push_back(8);

    l.push_back(10);

    copy(v.begin(), v.end(), l.begin());

    list<int>::iterator i;

    for (i = l.begin(); i != l.end(); i++)

        cout << *i << ' ';

    cout << endl;
    //把2，4，6替换了，输出为1 3 5 8 10

}

int square(int x) {
    return x * x;
}

void test_transform() {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);

    list<int> l(3);
    transform(v1.begin(), v1.end(), l.begin(), square);
    list<int>::iterator i;
    for (i = l.begin(); i != l.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;//输出1 9 25
}

void test_replace() {
    //构造可变数组
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    //构造迭代器
    vector<int>::iterator i;
    replace(v.begin(), v.end(), 4, 100);
    for (i = v.begin(); i != v.end(); ++i) {
        cout << *i << " " << endl;
    }
    /*输出
    1
    2
    3
    100
     */
}

bool odd(int x) {
    return x % 2;
}

void test_replace_if() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    //构造迭代器
    vector<int>::iterator i;
    replace_if(v.begin(), v.end(), odd, 100);
    for (i = v.begin(); i != v.end(); ++i) {
        cout << *i << " " << endl;
    }
}

void test_fill_n(){
    vector<double> v(10);
    fill_n(v.begin(),5,-1);
    vector<double>::iterator i;
    for (i = v.begin(); i !=v.end() ; ++i) {
        cout << *i << " ";//输出-1 -1 -1 -1 -1 0 0 0 0 0
    }
}

void test_generate_n(){
    vector<int> v(10);
    generate_n(v.begin(),5,rand);
    vector<int>::iterator ilocation;
    for(ilocation=v.begin();ilocation!=v.end();ilocation++)
        cout<<*ilocation<<' ';
    cout<<endl;
    //输出 16807 282475249 1622650073 984943658 1144108930 0 0 0 0 0
}

int even(int x){
    return x%2?0:1;
}
void test_remove_if(){
    vector<int> v;
    for(int i=1;i<=10;i++)
        v.push_back(i);
    vector<int>::iterator ilocation,result;
    cout<<"移除前：";
    for(ilocation=v.begin();ilocation!=v.end();ilocation++)
        cout<<*ilocation<<' ';
    cout<<endl;
    result=remove_if(v.begin(),v.end(),even);
    cout<<"移除后：";
    for(ilocation=v.begin();ilocation!=result;ilocation++)
        cout<<*ilocation<<' ';
    cout<<endl;


}
void test_unique(){
    vector<int> v;
    v.push_back(2);

    v.push_back(6);

    v.push_back(6);

    v.push_back(6);

    v.push_back(9);

    v.push_back(6);

    v.push_back(3);
    vector<int>::iterator ilocation,result;
    for(ilocation=v.begin();ilocation!=v.end();ilocation++)

        cout<<*ilocation<<' ';

    cout<<endl<<"\n";
    //
    result=unique(v.begin(),v.end());
    for(ilocation=v.begin();ilocation!=result;ilocation++)

        cout<<*ilocation<<' ';

    cout<<endl<<"\n";

    //
    for(ilocation=v.begin();ilocation!=v.end();ilocation++)

        cout<<*ilocation<<' ';

    cout<<endl<<"\n";
    /*
     * 输出  2 6 6 6 9 6 3

            2 6 9 6 3

            2 6 9 6 3 6 3
        说明只是指针改变，原来并没有改变
     */
}