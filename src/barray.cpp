#include "barray.h"
#include <cassert>

namespace barray {

current_device_t current_device = DEVICE_HOST;

std::vector<int> match_expr_sizes(const std::vector<int> size1,
                                  const std::vector<int> size2) {
  if (size1.size() == 0)
    return size2;
  if (size2.size() == 0)
    return size1;
  assert(size1.size() == size2.size() &&
         "Sizes of arrays do not agree for operation");

  // TODO 3: Make sure the sizes of all the dimensions are equal
  for (int i = 0; i < size1.size(); i++) {
    assert(size1[i] == size2[i] &&
           "Dimensions of the array being processed donot match");
  }
  return size1;
}

} // namespace barray
