// COMP2811 Coursework 1: QuakeDataset class

#pragma once

using namespace std;

#include <vector>
#include "quake.hpp"

class QuakeDataset
{
  public:
    // Specify prototypes or inlined methods here
    // (see UML diagram for what is required)
    QuakeDataset();
    QuakeDataset(string filename){ loadData(filename); }
    void loadData(string filename) {}
    int size() const {}
    Quake operator(int index) {}
    Quake strongest() const {}
    Quake shallowest() const {}
    double meanDepth() const {}
    double meanMagnitude() const {}

  private:
    std::vector<Quake> data;
};
