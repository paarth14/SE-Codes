//Vectors in STL (C++)

#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v) //creating a void - display function
{
    cout<<"Displaying zero length vector.."<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    
    cout<<endl;
}

/*Key Point :- Difference between Array and Vector 
In array Size is Fixed. If we have taken the size of array as 10 then we cannot add 11th element. 
But in case of vector we can insert as many element as we want.*/

int main()
{
    vector<int> vec1; //Zero length integer vector
    vector<char> vec2(4); //4 - element character vector
    // vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2); //4 - element character vector form vec2
    // display(vec3);
    vector<int> vec4(6,3); //6-element vector of 3s
    display(vec4);
    cout<<vec4.size();
    
    int element, size=5;
    
    // cout<<"Enter the size of your vector: "<<endl;
    // cin>>size;
    
    // for(int i=0; i<size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: "<<endl;
    //     cin>>element;
        
    //     vec1.push_back(element);//This method adds elements to the vector.
    // }
    
    // vec1.pop_back();//This method removes last element to the vector.
    
    // display(vec1);
    
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5, 566);//It inserts new elements before the element at the specified position.

    // display(vec1); //calling the function
    
    return 0;
}
