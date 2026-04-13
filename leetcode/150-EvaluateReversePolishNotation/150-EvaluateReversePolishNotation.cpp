// Last updated: 4/13/2026, 3:38:42 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector <int> record;
        int op1=1,op2=1;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i][1]=='\0'&&(tokens[i][0]=='+'||tokens[i][0]=='-'||tokens[i][0]=='*'||tokens[i][0]=='/')){
                cout<<record[record.size()-1]<<" "<<record[record.size()-2]<<endl;
                op1=record[record.size()-1];
                record.pop_back();
                op2=record[record.size()-1];
                record.pop_back();
                if(tokens[i][0]=='+') record.push_back(op2+op1);
                else if(tokens[i][0]=='-') record.push_back(op2-op1);
                else if(tokens[i][0]=='*') record.push_back(op2*op1);
                else if(tokens[i][0]=='/'){ record.push_back(op2/op1);}
            }
            else{
                record.push_back(stoi(tokens[i]));
            }
        }
        return record.back();
    }
};