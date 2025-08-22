//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 11

#include <iostream>
using namespace std;

class cuboid{
    public:
    int height=2;
    int width=3;
    int length=5;
};

int main(){
    cuboid c1;
    int vol=c1.height*c1.width*c1.length;
    cout<<"Volume:"<<vol<<endl;
}

//Output

//Volume:30
