#include <string>
#include <iostream>


class Solution {
public:
    std::string countAndSay(int n){
        if(n == 1){
            return "1";
        }

        std::string ret = countAndSay(n-1);
        std::string ans = "";
        int cnt = 1;

        for(int i=0; i < ret.size(); i++){
            if(ret[i] == ret[i+1]){
                cnt++;
            }else{
                ans.push_back(cnt+'0');
                ans.push_back(ret[i]);
            }
        }
        return ans;

    }
};

int main(){
    std::string ret = Solution().countAndSay(5);
    std::cout << ret << std::endl;

    return 0;
}