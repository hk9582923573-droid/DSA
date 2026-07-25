class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n= s.size();
       
        stack<int>q;
        string s1;
        vector<bool>v(n,0);
        for(int i=0;i<n;i++) {
            if(s[i]=='('){
                q.push(i);
            }
            else if(s[i]==')'){
                if(!q.empty()){
                    
                    q.pop();
                }
                else{
                    v[i]=1;
                }
                

            }
        }
            while(!q.empty()){
                v[q.top()]=1;
                q.pop();

            }
            int j=0;
            while(j<n){
                if(v[j]==0){
                    s1+=s[j];

                }
                j++;
            }





       
        
        

       

        
    return s1; }
};