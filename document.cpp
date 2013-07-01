#include <iostream>
#include <string>
#include "document.h"
using namespace std;

document::document (int id_, string path_) {
  id = id_;
  path = path_;
}

int document::GetId(){
     return id;
}

string document::GetPath(){
     return path;
}

