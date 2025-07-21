#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.emplace_back(60);
    vec.pop_back();
    //vec.clear();
    cout<<"The size of the vector is : "<<vec.size()<<endl;
    vec.insert(vec.begin()+5,100);  //insert into a particular position

    vector<int> vec1(5,-1);
    //vec.clear();  //clear size but capacity will be the same

    cout<<"The size of the vector is : "<<vec.size()<<endl; //size 3
    cout<<"The capacity of the vector is : "<<vec.capacity()<<endl; //capacity 4

    vec.erase(vec.begin());  //erase the first index value
    vec.erase(vec.begin()+2); //erase  a particular value
    vec.erase(vec.begin()+1, vec.begin()+3);  // Erase range based index value

    

    for(int val: vec){
        cout<<val<<endl;
    }
    for(int val : vec1){
        cout<<val<<endl;
    }

    cout<<"Is the vector empty = "<<vec.empty() <<endl;  //check if the vector is empty or not

    cout<<"Value at index 2 is : " <<vec[2]<<" Or "<< vec.at(2)<<endl;
    return 0;
}
