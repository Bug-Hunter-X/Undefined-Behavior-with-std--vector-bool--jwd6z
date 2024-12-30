#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec(10);
  int index = 12;

  // Correct way to check index bounds before accessing the element
  if (index >= 0 && index < vec.size()) {
    bool b = vec[index];
    std::cout << "Element at index " << index << ": " << b << std::endl;
  } else {
    std::cerr << "Index out of bounds!\n";
  }

  //Using at() which throws an exception on invalid access
try {
    bool b = vec.at(index); 
    std::cout << "Element at index " << index << ": " << b << std::endl; 
} catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
}
  return 0;
}
