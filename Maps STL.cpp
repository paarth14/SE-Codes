//Maps - STL 

//Maps :- A map in C++ STL is an associative container which stores key value pairs. To elaborate, a map stores a key of some data type and its corresponding values of some data type

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> marksMap;
    
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;
    
    marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );
    
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    
    
    return 0;
}

