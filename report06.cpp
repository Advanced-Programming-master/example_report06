#include <iostream>
#include <list>
#include <vector>

#include "shapes.h"
#include "sorts.h"

using namespace std;

int main() {
  Rectangle r0(0.0, 0.0, 1.0, 1.0);
  Rectangle r1(0.0, 0.0, 4.0, 5.0);
  Rectangle r2(0.0, 0.0, 2.0, 3.0);
  Rectangle r3(0.0, 0.0, 0.2, 2.0);
  Rectangle r4(0.0, 0.0, 2.2, 3.0);

  // v_recs にr1, r2, r3, r4, r5をいれる
  vector<Rectangle> v_recs;
  v_recs.push_back(r0);
  v_recs.push_back(r1);
  v_recs.push_back(r2);
  v_recs.push_back(r3);
  v_recs.push_back(r4);

  // ソート前のv_rectsの要素を表示
  cout << "before sort (vector)" << endl;
  for (int i = 0; i < v_recs.size(); i++) {
    v_recs[i].disp_param();
  }

  // sortRectanglesByAreをよびだして，v_recs内の要素を面積でソート
  sortRectanglesByArea(v_recs);

  // ソート後のv_rectsの要素を表示
  // []ではなく，イテレータを使ってみる
  cout << "after sort (vector)" << endl;
  auto v_i = v_recs.begin();
  while (v_i != v_recs.end()) {
    v_i->disp_param();
    v_i++;
  }

  list<Rectangle> l_recs;
  // l_recs にr1, r2, r3, r4, r5をいれる
  l_recs.push_back(r0);
  l_recs.push_back(r1);
  l_recs.push_back(r2);
  l_recs.push_back(r3);
  l_recs.push_back(r4);

  // ソート前のl_rectsの要素を表示
  // []は使えないので，イテレータを使う．
  cout << "before sort (list)" << endl;
  auto l_i = l_recs.begin();
  while (l_i != l_recs.end()) {
    l_i->disp_param();
    l_i++;
  }

  // sortRectanglesByAreをよびだして，l_recs内の要素を面積でソート
 sortRectanglesByArea(l_recs);

  // ソート後のl_rectsの要素を表示
  // for_eachを使ってみる
  cout << "after sort (list)" << endl;
  for_each(l_recs.begin(), l_recs.end(), [](Rectangle s) { s.disp_param(); });
}