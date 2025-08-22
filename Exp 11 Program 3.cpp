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
    
    cout<<"Enter height: ";
    cin>>c1.height;
    cout<<"Enter width: ";
    cin>>c1.width;
    cout<<"Enter length: ";
    cin>>c1.length;

    c1.Display();
}

/*Output

Enter height: 4
Enter width: 2
Enter length: 8
Volume: 64
*/

