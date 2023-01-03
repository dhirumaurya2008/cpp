#include<iostream>
using namespace std;

class Matrix; // Forword declaration so that it won't complain

class Vector {
    int e_[3];
    int n_;
    public:
    Vector(int n) : n_(n) {
        for (int index = 0; index < n_; index++) {
            e_[index] = index + 1;
        }
    }
    void clear() {
        for (int index = 0; index < n_; index++) {
            e_[index] = 0;
        }
    }

    void show() {
        for (int index = 0; index <n_; index++) {
            cout << e_[index] << " ";
        }
    }

    friend Vector prod(Matrix *pM, Vector *pV);
};


class Matrix {
    int e_[3][3], m_, n_;
    public:
    Matrix(int m, int n) : m_(m), n_(n) {
      for (int index = 0; index < m_; index++) {
        for (int index_j = 0; index_j < n_; index_j++) {
            e_[index][index_j] = index + index_j;
        }
      }
    }
    
    void show () {
        for (int index = 0; index < m_; index++) {
        for (int index_j = 0; index_j < n_; index_j++) {
            cout << e_[index][index_j] << " ";
        }
        cout << endl;
      }
      cout << endl;
    }
    friend Vector prod(Matrix *pM, Vector *pV);
};


Vector prod(Matrix *pM, Vector *pV) {
   Vector v(pM->m_); v.clear();
    for (int index = 0; index < pM->m_; index++) {
        for (int index_j = 0; index_j < pM->n_; index_j++) {
            v.e_[index] += pM->e_[index][index_j] * pV->e_[index_j] ;
        }
      }
   return v;
}


int main () {
    Matrix M(2, 3);
    Vector V(3);

    Vector PV = prod(&M, &V);

    V.show();
    M.show();
   
    PV.show();
    return 0;
}