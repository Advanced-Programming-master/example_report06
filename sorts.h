#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

#include "shapes.h"

using namespace std;

// ソートの実装を変えたものを準備
void sortRectanglesByArea(vector<Rectangle> &recs);
void sortRectanglesByArea(list<Rectangle> &recs);

void sortRectanglesByArea2(vector<Rectangle> &recs);
void sortRectanglesByArea2(list<Rectangle> &recs);

void sortRectanglesByArea3(vector<Rectangle> &recs);
void sortRectanglesByArea3(list<Rectangle> &recs);

