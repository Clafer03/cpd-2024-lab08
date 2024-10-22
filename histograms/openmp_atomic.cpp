#include "openmp_atomic.h"

static void BM_openmp_atomic(benchmark::State& state) {
  std::vector<int> histogram(buckets, 0);
  for(auto _ : state) {
    #pragma omp parallel for
    for(int idx = 0; idx < NUMERO_ELEMENTOS; idx++) {
      histograma[randomInput[idx] - 1]++;
    }
  }
}
