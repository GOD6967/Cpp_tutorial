#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> marks;
    marks.reserve(10);
    cout << marks.capacity();
    cout << marks.max_size();
    marks.push_back(10);
    marks.clear();
    marks.push_back(20);
    marks.push_back(23);
    marks.insert(marks.begin(), 50);
    cout << (*marks.begin()) << '\n';
    marks.pop_back();

    cout << marks.size() << '\n' ;
    cout << marks.front() << " " << marks.back() << '\n';
    cout << marks[0] << '\n';
    cout << marks.at(1) << '\n';

    marks.erase(marks.begin(), marks.end());
    cout << marks.size() << '\n';

    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(20);

    second.push_back(19);
    second.push_back(2893);

    first.swap(second);
    cout<< first[0] << " " << first[1] << '\n';

    for(int i: first) {
        cout << i << " ";
    }

    cout << '\n';

    vector<int>::iterator it = first.begin();

    while (it != first.end()) {
        cout << *it << " ";
        it++;
    }

    vector<vector<int>> arr(5, vector<int>(4,0));
    int totalRows = arr.size();
    int totalColumns = arr[0].size();
    

    return 0;
}