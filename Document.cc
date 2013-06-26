#include <iostream>
#include <string>
#include "Document.h"
using namespace std;

Document::Document (int id_, int path_) {
  id = id_;
  path = path_;
}

int Document::get_id(){
     return id;
}

int Document::get_path(){
     return path;
}

