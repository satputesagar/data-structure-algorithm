  #include<iostream>
  #include<algorithm>
  #include<queue>
  #include<unordered_set>
  using namespace std;
  class solution{
      public:
int candies(int m, int n) 
    { 
        // the largest number that cannot be made is m*n-m-n;
        
        queue<int >q;
        unordered_set<int >s;//the num which we cant reach
        int x=m*n-m-n;//largest num which we cant reach
        int ans=1;// for pos 1
        q.push(x);
        s.insert(x);
        while(q.empty()==false)
        {
            int x=q.front();
            if (x-m>1 && s.find(x-m)==s.end())
            {
                q.push(x-m);
                s.insert(x-m);
            }
            if (x-n>1 && s.find(x-n)==s.end())
            {
                q.push(x-n);
                s.insert(x-n);
            }
            ans++;
            q.pop();
            
        }
        return ans;
    	
    } 
  };
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int m,n;
            cin>>m>>n;
            solution obj;
            cout<<obj.candies(m,n)<<endl;
        }
    return 0;
        }