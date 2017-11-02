#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

/* 一、非变异算法
 * 是一组不破坏操作数据的模板函数，
 * 用来对序列数据进行逐个处理、元素查找、子序列搜索、统计和匹配。
 * 非变异算法具有极为广泛的适用性，基本上可应用与各种容器
 */
//1.1查找容器元素
//1.2条件查找容器元素
void test_find();
bool divby5(int x);
void test_find_if();
//1.3统计等于某值的容器元素个数count（l.begin（），l.end（），value）
//1.4子序列搜索search算法函数在一个序列中搜索与另一序列匹配的子序列。参数分别为一个序列的开始位置，结束位置和另一个序列的开始，结束位置
void search_sub();
//1.5重复元素子序列搜索
//search_n算法函数搜索序列中是否有一系列元素值均为某个给定值的子序列。函数原型：search_n(v.begin(),v.end(),3,8)，在v中找到3个连续的元素8
void search_sub_n();
/*二、变异算法
 * 是一组能够修改容器元素数据的模板函数。
 * copy(v.begin(),v.end(),l.begin());将v中的元素复制到l中。
 */
//2.1元素复制
void test_copy();
//2.2 元素变换
void test_transform();
int square(int x);
//2.3 替换
void test_replace();
//2.4 条件替换
//判断是否是奇数
bool odd(int x);
void test_replace_if();
//2.5 n次填充
void test_fill_n();