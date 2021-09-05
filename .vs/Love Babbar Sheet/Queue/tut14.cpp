#include<bits/stdc++.h> 
using namespace std; 

class Outscal {
  public: 
    vector<int> commonPrefix (vector<int> nums1,vector<int> nums2) { 
	   //Write your code here
    } 
};

int main() 
{ 
  int m,temp,i,n;
  vector <int> brr,arr;
  cin>>m>>n;
  while(m)
  {
    cin>>temp;
    brr.push_back(temp);
    m--;
  }
  while(n)
  {
    cin>>temp;
    arr.push_back(temp);
    n--;
  }
  class Outscal s;
	vector<int> ans = s.commonPrefix(brr,arr); 
  for(i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
	return (0); 
} 
