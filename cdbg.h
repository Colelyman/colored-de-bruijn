#ifndef CDBG_H
#define CDBG_H

#include <boost/graph/adjacency_list.hpp>

#include "vertex.h"
#include "bloom.h"
#include "color.h"

using boost::adjacency_list;
using boost::vecS;
using boost::directedS;
using boost::add_vertex;
using boost::add_edge;

class CdBG {
    public:

        CdBG();

        void addVertex(struct Vertex vertex);

        void addEdge();

        void addColorToVertex(struct Vertex vertex, Color color);

    private:

        /// The Boost Graph Library data structure to represent
        /// a graph.
        adjacency_list<vecS, vecS, directedS, Vertex> graph;

        /// The number of total colors present in the graph.
        unsigned int numColors;

};

#endif

