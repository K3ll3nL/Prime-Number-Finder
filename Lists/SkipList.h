//
// Created by Kellen Long on 4/6/2021.
//

#ifndef SKIPLIST_SKIPLIST_H
#define SKIPLIST_SKIPLIST_H

#include <bits/stdc++.h>

using namespace std;

template <class t>
class Node{
public:
    t value;

    //Arrays to hold pointers to nodes on different levels
    Node **forward;
    Node(t,int);
};


template <class t>
class SkipList {
    //Maximum level for this skip list
    int MAX_LEVEL;

    //the ratio deciding if a node will have a pointer one level above the next
    float p;

    //pointer pointing to the head node
    Node<t>* header;

    //placeholder for current level being traversed
    int level;

public:
    SkipList<t>(int,float);
    template<> Node<t>* createnode<t>(t,int);
    int randomlevel();
    void insert(t);
    void remove(t);
    bool find(t);
    void print();


    template<class t, class t>
    Node<t> *createnode(t value, int level);

2

    template<class t, class t>
    Node<t> *createnode(t value, int level);
};


#endif //SKIPLIST_SKIPLIST_H