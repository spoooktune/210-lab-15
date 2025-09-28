#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Movie{
    private:
        string title;
        string screenwriter;
        int releaseYear;

    public:
        string getTitle() {return title;}
        string getScreenwriter() {return screenwriter;}
        int getReleaseYear() {return releaseYear;}
        void setTitle(string t) {title = t;}
        void setScreenwriter(string sw) {screenwriter = sw;}
        void setReleaseYear(int ry) {releaseYear = ry;}
        void print();
};

void Movie::print(){
    cout << "Movie: " << title << endl;
    cout << "> Year Released: " << releaseYear << endl;
    cout << "> Screenwriter: " << screenwriter << endl << endl;
}

int main(){
    vector<Movie> movieList;
    ifstream in;
    in.open("input.txt");
    if (in.good()){
        // get inputs
    }
    else{
        cout << "File not found" << endl;
    }
}
