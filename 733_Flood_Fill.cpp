#include <vector>
using namespace std;
class Solution {
public:
    void f(vector<vector<int>>& image,int i,int j,int cc,int nc){
        if(i<0 || j<0 || i==image.size() || j==image[0].size())return;
        if(image[i][j]!=cc)return;
        image[i][j]=nc;
        f(image,i+1,j,cc,nc);
        f(image,i-1,j,cc,nc);
        f(image,i,j+1,cc,nc);
        f(image,i,j-1,cc,nc);
    
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)return image;
        f(image,sr,sc,image[sr][sc],color);
        return image;
    }
};