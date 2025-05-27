#include <iostream>

std::vector<std::string> PyFunctions::readlines(std::string& file_name) {
    
  std::ifstream input_file(file_name);
  if (!input_file.is_open()) {
    std::cerr << "Data file could not be opened." << std::endl;
    exit(0);
  }

  std::vector<std::string> lines;
  std::string line;

  while (std::getline(input_file, line)) {
    lines.push_back(line);
  }

  input_file.close();

  return lines;

}


// This function acts identically to the word 'in' in Python.  It checks
// if a string contains a substring, or if string_a is in string_b.
bool Rememberer::a_is_in_b(std::string string_a, std::string string_b) {
  size_t found = string_b.find(string_a);

  if (found != std::string::npos) {
    return true;
  } else {
    return false;
  }
}
