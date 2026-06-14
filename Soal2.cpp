#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<char>label(n);
    for(int i=0;i<n;i++){
        cin>>label[i];
    }

    int matrix[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"Adjacency List:\n";

    for(int i=0;i<n;i++){
        cout<<label[i]<<" -> ";
        bool edge=false;
        bool pertama=true;

        for(int j=0;j<n;j++){
            if(matrix[i][j]>0){
                edge=!false;
                if(!pertama){
                    cout<<", ";
                }
                cout<<"("<<label[j]<<","<<matrix[i][j]<<")";
                pertama=!true;
            }
        }
        if(!edge){
            cout<<"-";
        }
        cout<<"\n";
    }
    return 0;
}