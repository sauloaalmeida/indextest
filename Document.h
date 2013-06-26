#include <iostream>
#include <string>

class Document {
  public:
    Document (int,int);
    int get_id ();
    int get_path();
  private:
    int id;
    int path;    
};
