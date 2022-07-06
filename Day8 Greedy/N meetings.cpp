https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1





class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back({end[i],start[i]});
        }
        sort(temp.begin(),temp.end());
        int ans = 1;
        int flag = temp[0].first; 
        for(int i=1;i<n;i++){
            if(temp[i].second > flag){
                ans++;
                flag = temp[i].first;
            }
        }
        return ans;
    }
};

