#pragma once

#include <vector>

namespace LAFECPP {
    
    template <class T>
    class Matrix{
    private:
        unsigned int _rows;
        unsigned int _cols;
        std::vector<std::vector<T>> _data;
    public:
        Matrix(std::vector<std::vector<T>> data){
            this->_rows = data.size();
            this->_cols = data[0].size();
            this->_data = data;
        }
        unsigned int matrixRows(){
            return _rows;
        }
        unsigned int matrixClos(){
            return _cols;
        }
    };
    
}