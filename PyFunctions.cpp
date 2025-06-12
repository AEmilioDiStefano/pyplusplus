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

std::vector<std::string> Rememberer::readlines(std::string& file_name) {
    
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

void Rememberer::writeStringToFile(std::string string_line, std::string& file_name) {
  std::ofstream outputFile;

  // Open the file in append mode. This ensures that new data is written 
  // to the end of the file without overwriting existing content.
  outputFile.open(file_name, std::ios::app);

  if (outputFile.is_open()) {
    std::getline(std::cin, string_line);

    // Write the string to the file, followed by a newline character.
    outputFile << string_line << std::endl;

    // Close the file
    outputFile.close();
    std::cout << "Text written to file successfully." << std::endl;
  } else {
    std::cerr << "SYSTEM: There was a problem opening the file and unfortunately your response was not saved." << std::endl;
  }
}








