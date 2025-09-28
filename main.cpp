#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

const int NUM_MOVIES = 4;

// Movie Class: 3 vars, 3 getters, 3 setters, 1 display method
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

// Display method
void Movie::print(){
    cout << "Movie: " << title << endl;
    cout << "> Year Released: " << releaseYear << endl;
    cout << "> Screenwriter: " << screenwriter << endl << endl;
}

// Takes input from input file, puts into temp Movie obj, puts obj into vector
int main(){
    vector<Movie> movieList;
    ifstream in;
    in.open("input.txt");
    if (in.good()){
        string t, sw;
        int ry;
        for (int i = 0; i < NUM_MOVIES; i++){
            Movie temp;
            getline(in, t);
            in.ignore();
            in >> ry;
            getline(in, sw);
            in.ignore();
            temp.setTitle(t);
            temp.setReleaseYear(ry);
            temp.setScreenwriter(sw);
            movieList.push_back(temp);
        }
        in.close();
    }
    else{
        cout << "File not found" << endl;
    }
    for (int i = 0; i < NUM_MOVIES; i++){
        movieList[i].print();
    }
}
