#include "openmp_atomic.h"
#include "omp"
#include <atomic>

std::vector<int> OpenMPAtomic::calculate(const int* input, const int buckets,
                                       const int input_size) {
  std::atomic<int> histogram(buckets, 0);
  #pragma omp parallel for
    for(int idx = 0; idx < input_size; idx++) {
      histograma[randomInput[idx] - 1]++;
    }
 return histogram;
}
