#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int,int> table;

    //Isertion
    table[1]=12;
    table[2]=13;
    table[3]=15;

    // //Iteration
    unordered_map<int,int>::iterator it;

    //// Normal Loop
    // for(it=table.begin();it!=table.end();it++){
    //     int key = it->first;
    //     int val = it->second;
    //     cout << key << "=" << val << endl;
    // }

    // //For Each Loop
    for(auto it :table){
        int key = it.first;
        int val = it.second;
        cout << key << "=" << val << endl;
    }

    ////Finding
    if(table.find(2)!=table.end()){
        //Found 
        int value = table[2];
        cout << "Found"<<value<< endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    ////Deletion
    table.erase(2);
    for(auto it :table){
        int key = it.first;
        int val = it.second;
        cout << key << "=" << val << endl;
    }
    
    if(table.find(2)!=table.end()){
        //Found 
        int value = table[2];
        cout << "Found"<<value<< endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    return 0;
}