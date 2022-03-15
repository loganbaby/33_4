#include <iostream>
#include <vector>
#include <exception>

template <typename T>
T middleValue(const std::vector<T>& arr) {
  if (arr.empty()) throw std::exception();

  try {
    T value = 0;
    for (int i = 0; i < arr.size(); i++) {
      value = value + arr[i];
    }

    return value / arr.size();
  } catch (const std::exception x) {
    std::cerr << "Emty vector";
  }
}

int main() {
  std::vector<double> vec{2.3, 5.44};
  std::cout << middleValue(vec) << std::endl;

  std::vector<int> vec_2{3, 6, 0};
  std::cout << middleValue(vec_2) << std::endl;

  std::vector<float> vec_empty;
  std::cout << middleValue(vec_empty);
}