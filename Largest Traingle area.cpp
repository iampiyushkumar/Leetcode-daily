class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
       double maxarea=0;
       int n=points.size();
       for(int i=0;i<n-2;i++)
       {
          for(int j=i+1;j<n-1;j++)
          {
            for(int k=j+1;k<n;k++)
            {
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[j][0];
                int y2=points[j][1];
                int x3=points[k][0];
                int y3=points[k][1];
              double a = hypot((double)(x1-x2), (double)(y1-y2));
                    double b = hypot((double)(x1-x3), (double)(y1-y3));
                    double c = hypot((double)(x2-x3), (double)(y2-y3));
                    double s = (a+b+c) * 0.5; 
                    double rad = s*(s-a)*(s-b)*(s-c);
                    double area = sqrt(rad);
                    maxarea=max(maxarea,area);

            }
          }
       }
       return maxarea;
    }
};
