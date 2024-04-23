#include <iostream>
using namespace std;


void print_maze_paths(vector<vector<string> >& maze , int sr , int sc , int dr , int dc , string ans){
    if(sr==dr && sc== dc){
        cout<<ans<<endl;
        return;
    }

    // if(sr>dr || sc > dc){
    //     return;
    // }


    if(sc<dc){
        print_maze_paths(maze,sr,sc+1,dr,dc,ans+"h");
    }

    if(sr<dr){
        print_maze_paths(maze,sr+1,sc,dr,dc,ans+"v");
    }

    if(sr<dr && sc<dc){
        print_maze_paths(maze,sr+1,sc+1,dr,dc,ans+"d");
    }
}


int main(){


}