//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 11

#include <iostream>
using namespace std;

class cuboid{
    public:
    int height;
    int width;
    int length;
    
    void input(){
        cout<<"Enter height: ";
        cin>>height;
        cout<<"Enter width: ";
        cin>>width;
        cout<<"Enter length: ";
        cin>>length;
    }
    
    int volume(){
        int v;
        v=height*width*length;
        return v;
    }
    
    void Display()
    {
        cout<<"Volume: "<<volume();
    }
    
};

int main(){
    
    cuboid c1;
    c1.input();
    c1.Display();
    return 0;
}

/*Output

Enter height: 4
Enter width: 2
Enter length: 8
Volume: 64
*/

