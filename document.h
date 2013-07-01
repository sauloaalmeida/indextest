#include <iostream>
#include <string>
using namespace std;

class document {
  public:
    document (int,string);
    int GetId ();
    string GetPath();
  private:
    int id;
    string path;    
};
