#include <iostream>
#include <vector>
using namespace std;
std::vector<double> readInVector(std::string s) {
  int prev_location = 0;
  int next_location = 0;
  std::vector<double> result;
  while(s.find(',', prev_location) != std::string::npos) {
    next_location = s.find(',', prev_location);
    // std::cout << "prev_location: " << prev_location << std::endl;
    // std::cout << "next_location: " << next_location << std::endl;
    // // substr [,];
    // std::cout << s.substr(prev_location, next_location - prev_location) << std::endl;
    result.push_back(std::stod(s.substr(prev_location, next_location - prev_location)));
    next_location++;
    prev_location = next_location;
  }
  result.push_back(std::stod(s.substr(prev_location, std::string::npos)));
  return result;
}

int main() {
  std::vector<double> x;
  std::vector<double> w;
  std::vector<double> y;
  bool pack_with_zeros = true;

  std::string s;
  std::cin >> s;
  if(s == "false") {
    pack_with_zeros = false;
  }
  std::cin >> s;
  x = readInVector(s);
  std::cin >> s;
  w = readInVector(s);

  // TODO write your code here
  // =========== START =========
  int start = 0;
  int end = x.size() - 1;
  int offset = w.size()/2;
  int total = 0;

  for (int i = 0; i < x.size(); i++){
    int sum = 0;

    for (int j = 0; j < w.size(); j++){
      if(i-offset+j < 0){
        sum = sum + x[0]*w[j];
      } else if(i-offset+j >= x.size()){
        sum = sum + x.back()*w[j];
      } else {
        sum = sum + x[i-offset+j]*w[j];

      }

    }
    y.push_back(sum);
  }
  for (double x:y){
    cout << x << ',';
  }

  // =========== END ===========

  return 0;
}

