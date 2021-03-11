//List in STL (C++)

#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;
    for(it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    cout<<endl;
}
int main()
{
    list<int> list1; //List of zero length
    
    list1.push_back(5); //push_back --> adds elements to the list.
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(12);
    display(list1);
    list1.sort(); //sort() --> sort all the elements of the list.
    display(list1);
    // list1.reverse(); //reverse() --> reverse the complete list.
    // display(list1);
    // list1.pop_back(); //pop_back() --> removes elements from the last of the list.
    // display(list1);
    // list1.pop_front(); //pop_front() --> removes element from the front of the list.
    // display(list1);
    // list1.remove(9); //remove() --> using this we can remove element/s between the list. Note it also removes all the occurences of selected element from the list.     
    // display(list1); 
    
    
    list<int> list2(3); //Empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    
    display(list2);
    list2.sort();
    list1.merge(list2); //merge() --> using this function we can add up the both lists.
    cout<<"List 1 after merging: "<<endl;
    display(list1);
    return 0;
}
