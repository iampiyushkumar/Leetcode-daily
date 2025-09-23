class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>res1;
        vector<int>res2;
        stringstream ss(version1);
        string str;
        while(getline(ss,str,'.'))
        {
             int num=stoi(str);
        
             res1.push_back(num);
        }
        stringstream ss2(version2);
        while(getline(ss2,str,'.'))
        {
            int num=stoi(str);
          
            res2.push_back(num);
        }
        int n=res1.size();
        int m=res2.size();
        int len=min(n,m);
        int i=0;
        for( i=0;i<len;i++)
        {
            if(res1[i]>res2[i]) return 1;
            else if(res1[i]<res2[i]) return -1;
        }
        
        if(i<res1.size())
        {
            for(int j=i;j<n;j++)
            {
                if(res1[j]!=0) return 1;
            }
        }
       else if(i<res2.size())
       {
         for(int j=i;j<m;j++)
            {
                if(res2[j]!=0) return -1;
            }
       }
       return 0;
    }
};
