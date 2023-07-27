#include "show_file.h"

#include <filesystem>


namespace fs =  std::filesystem;

const fs::path resourcesPath = 
    fs::current_path().parent_path().parent_path() / "resources";

void main(){
  displayFileContent((resourcesPath/"lorem_ipsum.txt").string());
}