#include <iostream>
#include <vector>
#include <list>

#include "shapes.h"
#include "sorts.h"

using namespace std;

int main(){

    Rectangle r0(0.0,0.0,1.0,1.0);
    Rectangle r1(0.0,0.0,4.0,5.0);
    Rectangle r2(0.0,0.0,2.0,3.0);
    Rectangle r3(0.0,0.0,0.2,2.0);
    Rectangle r4(0.0,0.0,2.2,3.0);


    vector<Rectangle> v_recs;
    // v_recs にr1, r2, r3, r4, r5をいれる

    // sortRectanglesByAreをよびだして，v_recs内の要素を面積でソート

    // ソート後のv_rectsの要素を表示

    list<Rectangle> l_recs;
    // l_recs にr1, r2, r3, r4, r5をいれる

    // sortRectanglesByAreをよびだして，l_recs内の要素を面積でソート

    // ソート後のl_rectsの要素を表示



}