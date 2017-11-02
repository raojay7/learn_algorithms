//
// Created by Jay on 2017/11/2.
//

#ifndef LEARN_ALGORITHMS_SORT_EXERCISE_H
#define LEARN_ALGORITHMS_SORT_EXERCISE_H

#endif //LEARN_ALGORITHMS_SORT_EXERCISE_H
#include <vector>

#include <algorithm>

#include <iostream>

using namespace std;


/*
三、排序算法

1、创建堆make_heap

2、元素入堆push_heap（默认插入最后一个元素）

3、元素出堆pop_heap（与push_heap一样，pop_heap必须对堆操作才有意义）
 */
//3.1
void test_heap();
//3.2堆排序sort_heap
/*
使用：

make_heap(v.begin(),v.end());

sort_heap(v.begin(),v.end());
 */
void test_sort_heap();
//3.3排序
void test_sort();