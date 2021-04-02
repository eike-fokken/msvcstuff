#include <filesystem>
#include <iostream>

int main() {

  namespace fs = std::filesystem;
  fs::path p("asdfjj");
  std::cout << "before: " << fs::exists(p) << std::endl;
  fs::create_directory(p);
  std::cout << "after: " << fs::exists(p) << std::endl;
  fs::remove_all(p);
  std::cout << "after remove: " << fs::exists(p) << std::endl;
}
