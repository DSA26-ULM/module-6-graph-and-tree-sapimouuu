#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<char>label(n);
    for(int i=0;i<n;i++){
        cin>>label[i];
    }

    int adjMatrix[10][10] = {0};
    
    int m;
    cin>>m;

    for(int i=0; i<m; i++){
        char u,v;
        int w;
        cin>>u>>v>>w;
       
        int baris = u -'A';
        int kolom = v - 'A';
        adjMatrix[baris][kolom]=w;
    }
    cout<<"Adjacency Matrix: \n";

    cout<<"  ";
    
    for(int i=0;i<n;i++){
        cout<<label[i]<<" ";
    }
    cout<<"\n";

    for(int i=0;i<n;i++){
        char labelBaris=label[i];
        cout<<labelBaris<<" ";

        int indeksBaris = labelBaris - 'A';

        for(int j=0;j<n;j++){
            char labelKolom=label[j];
            int indeksKolom=labelKolom - 'A';

            cout<<adjMatrix[indeksBaris][indeksKolom]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}