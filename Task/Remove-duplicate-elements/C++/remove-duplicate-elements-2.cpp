#include <ext/hash_set>
#include <iostream>
using namespace std;

int main() {
    typedef __gnu_cxx::hash_set<int> TyHash;
    int data[] = {1, 2, 3, 2, 3, 4};

    TyHash unique_set(data, data + 6);

    cout << "Set items:" << endl;
    for (TyHash::iterator iter = unique_set.begin(); iter != unique_set.end(); iter++)
          cout << *iter << " ";
    cout << endl;
}
