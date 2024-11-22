#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> vec;
    vector<int> vec2(5, 10);
    vector<int> vec3 = {1,2,3,4, 5};


    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // rewmoving the element..
    vec.pop_back();

    //accessing the element;
    cout << "Element at index 1: " << vec[1] << std::endl;
    cout << "Safe access at index 1: " << vec.at(1)<< std::endl;

    // traversal using iterators;
    for(auto i = vec.begin(); i!= vec.end(); ++i){
        cout<< *i <<" ";
    }

    cout<<endl;


    // traversing using ranged based for loop
    cout<<"Vector elements using range-based loop: ";
    for(int i: vec){
        cout<<i<<" ";
    }

    cout<<endl;


    cout<<" size "<<vec.size()<<" ";
    cout<<vec.capacity()<<endl;
    cout<<(vec.empty() ? "yes" : "no")<<endl;

    vec.resize(5, 100); // Resize and initialize new elements to 100
    cout << "After resize, elements: ";
    vec.push_back(30);
    for (int val : vec) cout << val << " ";
    cout << endl;


    // sorting
    sort(vec.begin(), vec.end());

    for(int val : vec) cout<<val<<" ";
    cout<<endl;


    // max elememnt;
    int maxElement = *max_element(vec.begin(), vec.end());
    cout << "Maximum element: " << maxElement << std::endl;

    // erasing the elements;
    vec.erase(vec.begin());
    for(int val : vec) cout<<val<<" ";
    cout<<endl;

    // clearing all elements
    vec.clear();
    cout<<"After clearing, size : "<<vec.size()<<endl;


    vector<int> vect = {1,2,3,4,5};
    reverse(vect.begin(), vect.end());

    for(int i : vect) cout<< i <<" ";
}