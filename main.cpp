#include <iostream>
#include <list>
#include <vector>

using namespace std; 

class makeMatrix 
{
    protected:
        vector<vector<double> > a2DArray;
        int numberOfRows;
        int numberOfCollumns;

    public:

        void setNumberOfRows(int row){
            numberOfRows = row;
        }

        void setNumberOfCollumns(int col){
            numberOfCollumns = col;
        }

        void resize()
        {
            a2DArray.resize(numberOfRows);

            for (int i = 0; i < numberOfRows; ++i)
            {
                a2DArray[i].resize(numberOfCollumns);
            }

           
        }

        void checkSize()
        {
            cout << a2DArray.size() << endl;
            cout << a2DArray[1].size() << endl;
        }

        void printMatrix()
        {
            for (int i = 0; i < numberOfCollumns; ++i)
            {
                for (int j = 0; i < numberOfRows; ++j)
                {
                     cout << a2DArray[i][j] << endl;
                }

            }
        };
};

int main()
{
    makeMatrix mymatrix;
    mymatrix.setNumberOfRows(3);
    mymatrix.setNumberOfCollumns(5);
    mymatrix.resize();
    mymatrix.checkSize();

}