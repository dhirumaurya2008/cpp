#include<iostream>
using namespace std;

class MathObject {
 mutable bool piChached_;
 mutable double pi_;
 public:
 MathObject() : piChached_(false) {
  cout << "MathObject Ctor :" << endl;
 }

 double pi() const {
    if (!piChached_) {
        pi_ = 4;
        for (long step = 3; step < 1000000000; step += 4 ) {
            pi_ += ((-4.0 / (double)step) + (4.0/ ((double)step + 2)));
        }
        piChached_ = true; // Now computed and cached
    }
    return pi_;
 }
};

int main () {
    const MathObject mo;
    cout << mo.pi() << endl;
}

/*Summary- 
- Here MathObject is logically constant but, we use mutable member for computation.
*/