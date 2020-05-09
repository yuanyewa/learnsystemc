#include <systemc.h> // include the systemC header file

void hello1() { // a normal c++ function
  cout << "Hello world uses approach 1" << endl;
}

struct HelloWorld : sc_module { // define a systemC module
  SC_CTOR(HelloWorld) {// constructor function, to be discussed later
    SC_METHOD(hello2); // register a member function to the kernel
  }
  void hello2(void) { // a function for systemC simulation kernel
    cout << "Hello world uses approach 2" << endl;
  }
};

int sc_main(int, char*[]) { // entry point
  hello1(); // approach #1: manually invoke a normal function
  HelloWorld helloworld("helloworld"); // approach #2, instantiate a systemC module
  sc_start(); // let systemC simulation kernel to invoke helloworld.hello2();
  return 0;
}
