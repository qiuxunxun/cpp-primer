#include <iostream>
#include <vector>
#include <iterator>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;


int main()
{
  int i;
  vector<int> ivec;

  while(cin >> i){
    ivec.push_back(i);
  }

  if(ivec.empty()){
    cout << "input at least one integer." << endl;
  }
  else if(ivec.size() == 1){
    cout << *ivec.begin() << " has no adjacent elements." << endl;
    return -1;
  }

  for (auto it = ivec.begin(); it + 1 != ivec.end(); ++it){
    cout << *it + *(it + 1) << " ";
  }
  cout << endl;

  for(auto beg = ivec.begin(),end = ivec.end()-1; beg <= end; ++beg, --end){
    cout << *beg + *end << " ";
  }
  cout << endl;

  return 0;

}
