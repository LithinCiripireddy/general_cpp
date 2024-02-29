#include <iostream>

using namespace std;
const float image[] = {
0.1,1.2,0.3,0.4,5,6,
1,2,3,4,5,6.2,7,
2,4,5,6.1,4,7,7,
3,56,7,3,678,777,
};

const int W = 2;
const int H = 3;

void get_filtered_image(const float image[],float filtered_image[W][H])
{
    int index;

    for(int i=0;i<W;i++)
        {
            for(int j=0;j<H;j++)
                {
                    index = j*H+i;
                    filtered_image[i][j] = image[index];
                }
        }
}


int main()
{
    float filtered_image[W][H] ;
    get_filtered_image(image,filtered_image) ;

    for(int i=0;i<W;i++)
        {
            for(int j=0;j<H;j++)
                {
                    cout << filtered_image[i][j] << ",";
                }
                cout << endl;
        }
    
    
}
