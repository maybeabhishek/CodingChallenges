class Solution
{

    // int n;
    vector<vector<bool>> isVisited;

    void floodfill(vector<vector<int>> &image, int sr, int sc, int prevColor, int newColor, int n)
    {

        if (sr < 0 || sr >= n)
            return;

        if (sc < 0 || sc >= image[0].size())
            return;

        if (image[sr][sc] == prevColor && !isVisited[sr][sc])
        {
            image[sr][sc] = newColor;
            isVisited[sr][sc] = true;
            floodfill(image, sr - 1, sc, prevColor, newColor, n);
            floodfill(image, sr, sc - 1, prevColor, newColor, n);
            floodfill(image, sr, sc + 1, prevColor, newColor, n);
            floodfill(image, sr + 1, sc, prevColor, newColor, n);
        }
        return;
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        cin.tie(NULL), cout.tie(NULL), ios::sync_with_stdio(false);
        isVisited.resize(image.size(), vector<bool>(image[0].size()));
        int prevColor = image[sr][sc];
        floodfill(image, sr, sc, prevColor, newColor, image.size());
        return image;
    }
};
