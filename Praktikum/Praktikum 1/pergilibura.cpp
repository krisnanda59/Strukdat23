#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<string> wisata;
  string input;

  while (true) {
    getline(cin, input);
    if (input == "gasss") {
      break;
    }

    wisata.push_back(input);
  }

  wisata.erase(
      remove_if(wisata.begin(), wisata.end(), [](const string &wisata) {
        return count(wisata.begin(), wisata.end(), 'o') >= 3;
      }),
      wisata.end());

  sort(wisata.begin(), wisata.end());

  for (const string &wisata : wisata) {
    cout << wisata << endl;
  }

  return 0;
}
