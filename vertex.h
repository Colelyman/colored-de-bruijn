#ifndef VERTEX_H
#define VERTEX_H

#include <string>
#include <set>
//#include <sdsl/bit_vectors.hpp>

#include "color.h"

using std::string;
using std::set;
//using sdsl::bit_vector;

struct Vertex 
{
    string sequence;
    //bit_vector colors;
};

Vertex buildVertex(string seq, set<Color> colors);

#endif

