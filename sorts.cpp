#include "sorts.h"

// libraryを使う場合1
// 面積を比較する関数を準備
bool comp(Rectangle &a, Rectangle &b) { return a.calcArea() < b.calcArea(); };
// recs内の要素を面積でソート
// std::sort()を使う
void sortRectanglesByArea(vector<Rectangle> &recs) {
  sort(recs.begin(), recs.end(), comp);
}
// recs内の要素を面積でソート
// listのメソッドsort()を使う
void sortRectanglesByArea(list<Rectangle> &recs) { recs.sort(comp); }

// libraryを使う場合1
// 関数を準備せず，ラムダ式で与えることもできる
void sortRectanglesByArea2(vector<Rectangle> &recs) {
  sort(recs.begin(), recs.end(),
       [](Rectangle &a, Rectangle &b) { return a.calcArea() < b.calcArea(); });
}
// recs内の要素を面積でソート
// listのメソッドsort()を使う
void sortRectanglesByArea2(list<Rectangle> &recs) {
  recs.sort(
      [](Rectangle &a, Rectangle &b) { return a.calcArea() < b.calcArea(); });
}

// 自前でソートを実装
// quick sort
void qsort(vector<Rectangle> &recs, int first, int last) {
  if (last - first <= 1) return;
  int i = first;
  int j = last - 1;
  for (int p = first;; i++, j--) {
    while (recs[i].calcArea() < recs[p].calcArea()) {
      ++i;
    }
    while (recs[p].calcArea() < recs[j].calcArea()) {
      --j;
    }
    if (i >= j) {
      break;
    }
    swap(recs[i], recs[j]);
  }
  qsort(recs, first, i);
  qsort(recs, j + 1, last);
}
void sortRectanglesByArea3(vector<Rectangle> &recs) {
    qsort(recs, 0, recs.size());
}

// バブルソート
void sortRectanglesByArea3(list<Rectangle> &recs) {
  auto last = recs.end();
  last--;

  for (auto first = recs.begin(); first != last; first++) {
    for (auto left = first; left != last; left++) {
      auto right = left;
      right++;
      if (left->calcArea() > right->calcArea()) {
        iter_swap(right, left);
      }
    }
  }
}