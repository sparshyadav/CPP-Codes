#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> collision(vector<int> asteroids)
{
        stack<int> st;
        for(int i=0; i<asteroids.size(); i++){
            if(asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty() && st.top()>0 && abs(asteroids[i])>st.top()){
                   st.pop();
                }
                if(st.empty() || st.top()<0){
                    st.push(asteroids[i]);
                }
                else if(abs(asteroids[i])==st.top()){
                    st.pop();
                }
            }
        }

        vector<int> ans(st.size());
        for(int i=ans.size()-1; i>=0; i--){
            ans[i]=st.top();
            st.pop();
        }

        return ans;
}

int main()
{

    vector<int> arr = {0 ,-2, -4 ,2 ,-4, 4, 4, 0, 5, 3 };
    vector<int> result = collision(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}