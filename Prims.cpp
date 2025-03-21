#include <iostream>

using namespace std;

int main(){
    int vn;
    cout<<"Enter total number of vertices - ";
    cin>>vn;
    int en;
    cout<<"Enter total number of edges -";
    cin>>en;
    int adj_matrx[vn][vn]={0};
    cout<<"Enter edges with weight- ";
    for (int i=0;i<en;i++)
    {
        int a,b,wt;
        cin>>a>>b>>wt;
        adj_matrx[a][b]=wt;
        adj_matrx[b][a]=wt;
    }
    int start_vertex;
    cout<<"Enter the start vertex -";
    cin>>start_vertex;
    for(int i=0;i<vn;i++)
    {
        for (int j=0;j<vn;j++)
        {
            cout<<adj_matrx[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}