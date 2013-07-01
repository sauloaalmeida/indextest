#include <iostream>
#include <string>
#include "document.h"
using namespace std;

int main(void){

   document *doc;
   doc = new document(1,"/home/saulo/teste.txt");

   cout << "id: " << doc->GetId() << endl;
   cout << "path:"<< doc->GetPath() << endl;

   return 0;
}
