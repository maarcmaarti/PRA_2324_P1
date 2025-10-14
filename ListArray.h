#include <ostream>
#include "List.h"

template <typename T> 
class ListArray : public List<T> {

    public:
       T* arr;
       int max;
       int n;
       static const int MINSIZE = 2;
       void resize(int new_size);
       void insert(int pos, T e){
       if(pos<0||pos>size()){
       throw{std::out_of_range};
       }else{arr[pos]=e;
       }};
        // miembros publicos y heredados

    private:
       ListArray();
       ~ListArray();
       T operator[](int pos);
       frind std::ostream&operator<<(stsd::ostream&out, const ListArray<T>&list);
       //miembros privados
};
