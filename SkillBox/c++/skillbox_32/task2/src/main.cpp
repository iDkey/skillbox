
#include <string>
#include "../header/kbd.h"



// Parse json into f_n =================================
namespace f_n{
    struct Actor {
        std::string name;
        std::string fulName;
        std::string live;
        int birth;
        bool gender;
    };
    struct Data_Movie {
        std::string name;
        std::string country;
        std::string director;
        std::string writer;
        double rate;
        int year;
        int time;
        f_n::Actor actor;

    };

    struct Movie {
        std::string name;
        f_n::Data_Movie dataMovie;
    };
}










int main() {
    kbd();

//    f_n::Movie movie;
//    char titanic[] = "titanic";
//    movie.name = j[titanic];
//    movie.dataMovie.name = j["titanic"]["name"];
//    movie.dataMovie.country = j["titanic"]["country"];
//    movie.dataMovie.director = j[titanic]["director"];
//    movie.dataMovie.writer = j[titanic]["writer"];
//    movie.dataMovie.rate = j[titanic]["rate"];



//    std::cout << movie.name;

}
