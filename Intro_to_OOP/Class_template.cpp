#include <assert.h>
#include <string>
#include <sstream>

// TODO: Add the correct template specification
template<class KeyType, class ValueType> // tempalte typename or class is used interchangeably. 
class Mapping {
public:
  Mapping(KeyType key, ValueType value) : key(key), value(value) {}
  std::string Print() const {
    std::ostringstream stream;
    stream << key << ": " << value;
    return stream.str();
  }
  KeyType key;
  ValueType value;
};

// Test
int main() {
  Mapping<std::string, int> mapping("age", 20); // need to declare the typename when create the class objects, 
                                                 //To create a class template object, you need to define the data type inside a < > when creation.
  assert(mapping.Print() == "age: 20");
}
