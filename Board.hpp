#pragma once
#include "City.hpp"
#include <iostream>
#include <vector>
#include <map>

namespace pandemic {

    class Board
    {
        private:
            std::vector<Color> found_cure;  // by color!!
            // std::map<City, City_info> cities; // cities   // map<City, City_info> cities ?
            
            void init();

        public:
            static std::map<City, City_info> cities;

            Board()
            {
                init();
            }
            ~Board() {}

            int& operator[] (City city) ;  
            bool is_clean() ;
            void remove_cures() ;  
            void remove_stations() ;
            void add_cure(Color c);
            bool is_cured(Color c);
            friend std::ostream& operator<< (std::ostream& output, const Board& board);
    };

}    
