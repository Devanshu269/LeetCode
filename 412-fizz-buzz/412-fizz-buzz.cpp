class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        int c3=0, c5=0;
        for(int i=1; i<=n; i++){
            c3++,c5++;
            string d = "";
            if(c3==3){
                d += "Fizz";
                c3=0;
            }
            if(c5==5){
                d += "Buzz";
                c5=0;
            }
            if(d == ""){
                ans.push_back(to_string(i));
            }else{
                ans.push_back(d);
            }
        }
        return ans;
    }
};