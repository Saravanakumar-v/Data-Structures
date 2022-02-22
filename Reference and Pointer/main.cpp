// Data Structure
// References and pointer

#include<iostream>
#include<vector>
using namespace std;

void arrTranverse(int *p,int &len) {  // accessing array using pointer
    for(int i=0;i< len;i++) {
        cout<<*(p+i)<<" ";      // indexing through array using pointer
    }
    cout<<"array pointer indexing.";
}

void vectorTranverse(vector<int> &v) { // by referencing, creation of large value will avoided 
    for(const auto &i: v){ // const auto prevent from change of value in vector
        cout<<i<<" ";
    }
    cout<<"vector referencing.";
}

// Main function
int main() {
    vector<int> v;     

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i=1;i<= 10;i++) {
        v.push_back(i);
    }

    int sizeOf = sizeof(arr)/sizeof(arr[0]);

    vectorTranverse(v);     // call vectorTranverse() function
    cout<<endl;

    arrTranverse(arr,sizeOf);   // call arrTraverse() function
    
    return 0;
}
