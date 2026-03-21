#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>



using namespace std;

void myPrint(int val) {
    cout << val << " " ;
}
int main() {
    vector<int> v;
    v.push_back(12);
    v.push_back(25);
    v.push_back(13);
    v.push_back(64);
    v.push_back(57);
    v.push_back(32);
    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();
    while (itBegin != itEnd) {
        cout << *itBegin << " " ;
        itBegin++;
    }
    cout << endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " " ;
    
    }
    cout << endl;

    for_each(v.begin(), v.end(), myPrint);
    itBegin = v.begin();
    sort(itBegin, itEnd);
    //sort(v.begin(), v.end());

    cout << endl;
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " " ;
    }
    cout << endl;
   /* vector<int> v = {1, 2, 3, 4, 5};
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    return 0;*/
}
