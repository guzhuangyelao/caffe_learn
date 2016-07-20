//
// Created by jacklone on 7/20/16.
//

#include <iostream>
#include "tutorial.pb.h"

using namespace std;

int main(int argc, char** argv) {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " Address_book_file" << endl;
    return -1;
  }

  tutorial::Person person;
  person.set_email("123");
  person.set_name("jichenglong");
  person.set_home("xiguzhuang");
  cout << person.DebugString() << endl;
}

