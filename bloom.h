#ifndef BOOST_H
#define BOOST_H

#include <string>
#include "bloom_filter.hpp"

using std::string;

class Bloom {
    public:

        Bloom(int numElements, float falsePositiveProb);

        void insertElement(string element);

        bool isContained(string element);

    private:

        bloom_filter* filter;

        bloom_parameters params;

};

#endif

