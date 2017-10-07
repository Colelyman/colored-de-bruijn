#include "bloom.h"

Bloom::Bloom(int numElements, float falsePositiveProb) {
    params.projected_element_count = numElements;
    params.false_positive_probability = falsePositiveProb;

    params.compute_optimal_parameters();

    bloom_filter f(params);
    filter = &f;
}

void Bloom::insertElement(string element) {
    filter->insert(element);
}

bool Bloom::isContained(string element) {
    return filter->contains(element);
}

